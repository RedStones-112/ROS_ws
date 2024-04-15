from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description(): ## 정해진 함수명
    my_launch = LaunchDescription()
    
    turtlesim_node = Node(
            package="turtlesim",
            executable="turtlesim_node", output="screen",
            parameters=[
                {"background_r":255},
                {"background_g":190},
                {"background_b":200},
            ])
    
    dist_turtle_cation_node = Node(package="first_package",
            executable="dist_turtle_server", output="screen")

    my_launch.add_action(turtlesim_node)
    my_launch.add_action(dist_turtle_cation_node)

    return my_launch