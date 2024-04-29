#include <chrono>
#include <memory>
#include <vector>
#include <cmath>
#include <unistd.h>
#include "rclcpp/rclcpp.hpp"
#include "first_package_msgs/srv/multi_spawn.hpp"
#include "turtlesim/srv/spawn.hpp"
#include "turtlesim/srv/teleport_absolute.hpp"


using std::placeholders::_1;
using std::placeholders::_2;

class MultiSpawning : public rclcpp::Node{
public:
    MultiSpawning() : Node("multi_spawn")
    {
        server = this->create_service<first_package_msgs::srv::MultiSpawn>(
            "multi_spawn", std::bind(&MultiSpawning::service_callback, this, _1, _2));

        client_spawn = this->create_client<turtlesim::srv::Spawn>("spawn");
        client_teleport = this->create_client<turtlesim::srv::TeleportAbsolute>("turtle1/teleport_absolute");
        

    }
private:
    std::vector<std::vector<float>> calc_position(int num, float r){
        std::vector<std::vector<float>> result(3, std::vector<float>(num));
        float gap_theta = 2 * M_PI / num;
        for (int i = 0; i < num; ++i) {
            float theta = i * gap_theta;
            result[0][i] = r * std::cos(theta); // x 좌표
            result[1][i] = r * std::sin(theta); // y 좌표
            result[2][i] = theta; // 각도값
        }
        return result;
    }
    void service_callback(const std::shared_ptr<first_package_msgs::srv::MultiSpawn::Request> req,
    const std::shared_ptr<first_package_msgs::srv::MultiSpawn::Response> res){
        int num = req->num;
        float rad = 3; // 반지름
        auto client_spawn_req = std::make_shared<turtlesim::srv::Spawn::Request>();
        std::vector<std::vector<float>> positions = calc_position(num, rad);


        for (int i = 0; i < num; ++i){
            client_spawn_req->x = positions[0][i] + 5.54;
            client_spawn_req->y = positions[1][i] + 5.54;
            client_spawn_req->theta = positions[2][i];

            auto result_future = client_spawn->async_send_request(client_spawn_req);
            
            usleep(200000);
        }
        

    }


    rclcpp::Service<first_package_msgs::srv::MultiSpawn>::SharedPtr server;
    rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr client_spawn;
    rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedPtr client_teleport;

};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MultiSpawning>());
    rclcpp::shutdown();
    return 0;
}