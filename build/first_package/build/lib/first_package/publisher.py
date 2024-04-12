import rclpy as rp
from rclpy.node import Node

from geometry_msgs.msg import Twist


class TutlesimPublisher(Node) : 
    def __init__(self) : 
        super().__init__("turtlesim_publisher")
        self.publisher = self.create_publisher(
            Twist,
            "turtle1/cmd_vel",
            10
        )
        timer_priod = 0.5
        self.timer = self.create_timer(timer_priod, self.timer_callback)

    def timer_callback(self) :
        msg = Twist()
        msg.linear.x = 2.0
        msg.angular.z = 2.0
        self.publisher.publish(msg)
        
    
def main(args = None) : 
    rp.init(args=args)
    turtlesim_publisher = TutlesimPublisher()
    rp.spin(turtlesim_publisher) # while 1 :
    
    turtlesim_publisher.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
