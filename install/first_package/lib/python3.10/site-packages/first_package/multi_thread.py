import rclpy as rp

from rclpy.node import Node

from rclpy.executors import MultiThreadedExecutor

from first_package.publisher import TutlesimPublisher
from first_package.subscriber import TutlesimSubscriver


        
    
def main(args = None) : 
    rp.init()

    sub = TutlesimSubscriver()
    pub = TutlesimPublisher()

    excutor = MultiThreadedExecutor()

    excutor.add_node(sub)
    excutor.add_node(pub)
    
    try : 
        excutor.spin()
    finally : 
        excutor.shutdown()

        # sub.destroy_node()
        pub.destroy_node()
        rp.shutdown()
    


if __name__ == "__main__" : 
    main()
