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

        this->declare_parameter("path", "./capture/");
        this->declare_parameter("topic_name", "/webcam");
        

        recode_status = false;
        path = this->get_parameter("path").as_string();
        output_topic_name = this->get_parameter("topic_name").as_string();
        file_name_video = "video.avi";
        file_name_capture = "capture.jpg";
        old_recode_status = false;
        fourcc = cv::VideoWriter::fourcc('X', 'V', 'I', 'D');



        img_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/webcam", 10, std::bind(&CameraApp::img_callback, this, _1));

        edge_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/edge", 10, std::bind(&CameraApp::edge_callback, this, _1));

        cap_server_ = this->create_service<first_package_msgs::srv::Capture>(
            "capture", 
            std::bind(&CameraApp::cap_callback, this, _1, _2));

        rec_server_ = this->create_service<first_package_msgs::srv::Recode>(
            "recode", 
            std::bind(&CameraApp::rec_callback, this, _1, _2));


        param_handle_ = this->add_on_set_parameters_callback(
            std::bind(&CameraApp::parameter_callback, this, _1));
        // parameter_subscriber_ = this->add_on_set_parameters_callback(
        //     "/parameter_events", 10, std::bind(&CameraApp::parameter_callback, this, _1));
    }
private:
    bool recode_status; // 상태기반 컨트롤 변수
    bool old_recode_status;

    std::string path; // param 1
    std::string file_name_capture; // cv 변수들
    std::string file_name_video;
    cv::VideoWriter outputVideo;
    int fourcc;

    std::string output_topic_name; // param 2
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_subscriber_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr edge_subscriber_;
    
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr param_handle_;
    
    rclcpp::Service<first_package_msgs::srv::Capture>::SharedPtr cap_server_;
    rclcpp::Service<first_package_msgs::srv::Recode>::SharedPtr rec_server_;
    
    cv_bridge::CvImagePtr cv_ptr;
    void check_recode(){
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


    void img_callback(const sensor_msgs::msg::Image img_msg)
    {
        if (output_topic_name == "/webcam"){
            cv_ptr = cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::BGR8);

            // cv::imshow("original", cv_ptr->image);
            // cv::waitKey(3);

            check_recode();
        }
        
    }

    void edge_callback(const sensor_msgs::msg::Image img_msg) {
        if (output_topic_name == "/edge"){
            cv_ptr = cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::MONO8);

            // cv::imshow("edge", cv_ptr->image);
            // cv::waitKey(3);

            check_recode();
        }
    }

    rcl_interfaces::msg::SetParametersResult parameter_callback(const std::vector<rclcpp::Parameter> &params) {
        rcl_interfaces::msg::SetParametersResult result;
        
        output_topic_name;
        result.successful = true;
        for (const auto &param : params) 
        {
            if (param.get_name() == "path" && param.get_type() == rclcpp::ParameterType::PARAMETER_STRING) 
            {
                RCLCPP_INFO(this->get_logger(), "param changed!");
                path = param.value_to_string();
            } 
            
            else if (param.get_name() == "topic_name" && param.get_type() == rclcpp::ParameterType::PARAMETER_STRING) 
            {
                RCLCPP_INFO(this->get_logger(), "param changed!");
                output_topic_name = param.value_to_string();
            } 
    
            else
            {
                
                result.successful = false;
                result.reason = "Unsupported parameter";
            }
        }

        
        

        
        return result;
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