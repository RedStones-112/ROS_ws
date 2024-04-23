#include <chrono>
#include <memory>
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

#include "rclcpp/rclcpp.hpp"



#include "first_package_msgs/srv/capture.hpp"
#include "first_package_msgs/srv/recode.hpp"
#include "sensor_msgs/msg/image.hpp"

using std::placeholders::_1;
using std::placeholders::_2;


class CameraApp : public rclcpp::Node
{
public:
    CameraApp() : Node("camera_app")
    {
        img_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/webcam", 10, std::bind(&CameraApp::img_callback, this, _1));

        cap_server_ = this->create_service<first_package_msgs::srv::Capture>(
            "capture", 
            std::bind(&CameraApp::cap_callback, this, _1, _2));

        rec_server_ = this->create_service<first_package_msgs::srv::Recode>(
            "recode", 
            std::bind(&CameraApp::rec_callback, this, _1, _2));
        recode_status = false;
        path = "./capture/";
        file_name_video = "video.avi";
        file_name_capture = "capture.jpg";
        old_recode_status = false;
        fourcc = cv::VideoWriter::fourcc('X', 'V', 'I', 'D');

    }
private:
    bool recode_status;
    bool old_recode_status;
    std::string path;
    std::string file_name_capture;
    std::string file_name_video;
    cv::VideoWriter outputVideo;
    int fourcc;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_subscriber_;
    rclcpp::Service<first_package_msgs::srv::Capture>::SharedPtr cap_server_;
    rclcpp::Service<first_package_msgs::srv::Recode>::SharedPtr rec_server_;
    
    cv_bridge::CvImagePtr cv_ptr;
    void img_callback(const sensor_msgs::msg::Image img_msg)
    {
        
        
        cv_ptr = cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::BGR8);

        cv::imshow("test", cv_ptr->image);
        cv::waitKey(3);

        if (recode_status && !old_recode_status){
            outputVideo.open(path + file_name_video, fourcc, 50, cv::Size(cv_ptr->image.cols, cv_ptr->image.rows), true);

        }
        else if (recode_status){
            outputVideo.write(cv_ptr->image);
        }
        if (!recode_status && old_recode_status){
            outputVideo.release();
        }
        

        old_recode_status = recode_status;
    }

    first_package_msgs::srv::Capture::Response cap_callback(
        std::shared_ptr<first_package_msgs::srv::Capture::Request> req, 
        std::shared_ptr<first_package_msgs::srv::Capture::Response> res) {
            
            cv::imwrite(path + file_name_capture, cv_ptr->image);
            RCLCPP_INFO(this->get_logger(), "capture!");
            res->save_path = path + file_name_capture;
            return *res;
    }

    first_package_msgs::srv::Recode::Response rec_callback(
        std::shared_ptr<first_package_msgs::srv::Recode::Request> req, 
        std::shared_ptr<first_package_msgs::srv::Recode::Response> res) {
            recode_status = req->status;

            if (!req->status){
                res->save_path = path + file_name_video;
            }
            
            return *res;
    }

    
    

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CameraApp>());
    rclcpp::shutdown();
    return 0;
}