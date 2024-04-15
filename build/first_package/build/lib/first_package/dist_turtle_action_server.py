import rclpy as rp
import time
import math

from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rcl_interfaces.msg import SetParametersResult

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from first_package_msgs.action import DistTurtle
from first_package.subscriber import TutlesimSubscriver


class TurtleSub_Action(TutlesimSubscriver) :
    def __init__(self, ac_server):
        super().__init__()
        self.ac_server = ac_server


    def callback(self, msg):
        self.ac_server.current_pose = msg



class DistTurtleServer(Node) : 
    def __init__(self) : 
        super().__init__("action_server")
        self.total_dist = 0
        self.is_first_time = True
        self.current_pose = Pose()
        self.previous_pose = Pose()
        self.publishers1 = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.action_server = ActionServer(
            self,
            DistTurtle,
            "dist_turtle",
            self.excute_callback
        )
        
        self.get_logger().info("Dist turtle action server is started.")

        self.declare_parameter("quantile_time", 0.75)
        self.declare_parameter("almost_goal_dist", 0.5)

        (quantile_time, almosts_dist) = self.get_parameters(
            ["quantile_time", "almost_goal_dist"])
        self.quantile_time = quantile_time.value
        self.almosts_dist = almosts_dist.value

        self.add_on_set_parameters_callback(self.parameters_callback)


    def parameters_callback(self, params) :
        for param in params :
            self.get_logger().info(param.name, "is change to ", param.value)

            if param.name == "quantile_time" :
                self.quantile_time = param.value
            if param.name == "almost_goal_dist" :
                self.almosts_dist = param.value

        self.get_logger().info(f"quantile_time and almost_goal_dist is {self.quantile_time} {self.almosts_dist}")

        return SetParametersResult(successful = True)
            
    
    def calc_diff_pose(self) : 
        if self.is_first_time :
            self.previous_pose.x = self.current_pose.x
            self.previous_pose.y = self.current_pose.y
            self.is_first_time = False
        diff_dist = math.sqrt((self.current_pose.x - self.previous_pose.x)**2 + (self.current_pose.y - self.previous_pose.y)**2)
        self.previous_pose = self.current_pose

        return diff_dist
    

    def excute_callback(self, goal_handle) :
        feedback_msg = DistTurtle.Feedback()
        msg = Twist()
        msg.linear.x = goal_handle.request.linear_x
        msg.angular.z = goal_handle.request.angular_z

        while True :
            if  feedback_msg.remained_dist >= self.almosts_dist:
                msg.linear.x = goal_handle.request.linear_x
                msg.angular.z = goal_handle.request.angular_z
            else : 
                msg.linear.x = goal_handle.request.linear_x / 30
                msg.angular.z = goal_handle.request.angular_z / 30
            
            self.total_dist += self.calc_diff_pose()
            feedback_msg.remained_dist = goal_handle.request.dist - self.total_dist
            goal_handle.publish_feedback(feedback_msg)
            self.publishers1.publish(msg)
            time.sleep(0.1)
            
            if feedback_msg.remained_dist < 0.001: # 오차범위 너무 작을시 추가이동 발생
                break
        

        goal_handle.succeed()
        result = DistTurtle.Result()
        
        result.pos_x = self.current_pose.x
        result.pos_y = self.current_pose.y
        result.pos_theta = self.current_pose.theta
        result.result_dist = self.total_dist
        
        self.total_dist = 0
        self.is_first_time = True

        return result
        
        
    
def main(args = None) : 
    rp.init()

    ac = DistTurtleServer()
    sub = TurtleSub_Action(ac_server = ac)


    excutor = MultiThreadedExecutor()

    excutor.add_node(sub)
    excutor.add_node(ac)
    
    try : 
        excutor.spin()
    finally : 
        excutor.shutdown()
        sub.destroy_node()
        ac.destroy_node()
        rp.shutdown()
    


if __name__ == "__main__" : 
    main()
