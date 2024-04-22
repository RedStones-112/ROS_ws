#include <chrono>
#include <memory>
#include <string>
#include <opencv2/opencv.hpp>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"

using namespace std::chrono_literals;

class ImagePublisher : public rclcpp::Node
{
public:
    ImagePublisher()
    : Node("image_publisher")
    {
        publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/webcam", 10);
        timer_ = this->create_wall_timer(50ms, std::bind(&ImagePublisher::timer_callback, this));
        
        if(!cap.open(0)) return ;
        cap.set(cv::CAP_PROP_FRAME_WIDTH, static_cast<double>(640));
        cap.set(cv::CAP_PROP_FRAME_HEIGHT, static_cast<double>(480));

        img_msg_ = std::make_shared<sensor_msgs::msg::Image>();
    }

    
private:
    void timer_callback()
    {
        
        cap >> image;

        if (!image.empty()){
            img_msg_->height = image.rows;
            img_msg_->width = image.cols;
            img_msg_->encoding = "bgr8";
            img_msg_->step = static_cast<sensor_msgs::msg::Image::_step_type>(image.step);
            size_t size = image.step * image.rows;
            img_msg_->data.resize(size);
            memcpy(&img_msg_->data[0], image.data, size);
            img_msg_->header.frame_id = std::to_string(1);

            publisher_->publish(*img_msg_);
        }

        
    }
    
    cv::VideoCapture cap;
    cv::Mat image;
    sensor_msgs::msg::Image::SharedPtr img_msg_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImagePublisher>());
    rclcpp::shutdown();
    return 0;
}