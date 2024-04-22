#include <chrono>
#include <memory>
#include <vector>
#include <string>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

#include "rclcpp/rclcpp.hpp"


#include "sensor_msgs/msg/image.hpp"

using std::placeholders::_1;
using std::placeholders::_2;


class ImageSubscriber : public rclcpp::Node
{
public:
    ImageSubscriber() : Node("camera_app")
    {
        img_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/webcam", 10, std::bind(&ImageSubscriber::img_callback, this, _1)
        );


    }
private:
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_subscriber_;
    
    void img_callback(const sensor_msgs::msg::Image img_msg)
    {
        
        cv_bridge::CvImagePtr cv_ptr;
        cv_ptr = cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::BGR8);

        cv::imshow("test", cv_ptr->image);
        cv::waitKey(3);
    }

    
    

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImageSubscriber>());
    rclcpp::shutdown();
    return 0;
}