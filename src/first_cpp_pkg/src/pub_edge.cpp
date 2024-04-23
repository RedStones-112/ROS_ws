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


class EdgePublisher : public rclcpp::Node
{
public:
    EdgePublisher() : Node("edge_publisher")
    {
        img_subscriber_ = this->create_subscription<sensor_msgs::msg::Image>(
            "/webcam", 10, std::bind(&EdgePublisher::img_callback, this, _1)
        );
        edge_publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/edge", 10);

        edge_msg_ = std::make_shared<sensor_msgs::msg::Image>();

    }
private:
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr img_subscriber_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr edge_publisher_;
    sensor_msgs::msg::Image::SharedPtr edge_msg_;
    void img_callback(const sensor_msgs::msg::Image img_msg)
    {
        
        cv_bridge::CvImagePtr cv_ptr;
        cv_ptr = cv_bridge::toCvCopy(img_msg, sensor_msgs::image_encodings::BGR8);
        cv::Mat edge;
        cv::Canny(cv_ptr->image, edge, 50, 130);

        edge_msg_->height = edge.rows;
        edge_msg_->width = edge.cols;
        edge_msg_->encoding = "mono8";
        edge_msg_->step = static_cast<sensor_msgs::msg::Image::_step_type>(edge.step);
        size_t size = edge.step * edge.rows;
        edge_msg_->data.resize(size);
        memcpy(&edge_msg_->data[0], edge.data, size);
        edge_msg_->header.frame_id = std::to_string(1);

        edge_publisher_->publish(*edge_msg_);
    }

    
    

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EdgePublisher>());
    rclcpp::shutdown();
    return 0;
}