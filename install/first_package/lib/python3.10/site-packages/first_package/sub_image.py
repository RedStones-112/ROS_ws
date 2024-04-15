import rclpy as rp
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from rclpy.node import Node


class ImageSubscriber(Node) : 
    def __init__(self) : 
        super().__init__("image_subscriber")
        self.subscription = self.create_subscription(
            Image,
            "/web_cam",
            self.callback,
            10
        )
        self.subscription
        self.bridge = CvBridge()

    def callback(self, msg) :
        self.image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        cv2.imshow("img", self.image)
        cv2.waitKey(33)

    
def main(args = None) : 
    rp.init(args=args)
    image_sub = ImageSubscriber()
    rp.spin(image_sub) # while 1 :
    
    image_sub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
