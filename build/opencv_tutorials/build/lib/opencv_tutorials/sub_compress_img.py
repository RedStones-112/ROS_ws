import rclpy as rp
import cv2
import numpy as np
from sensor_msgs.msg import CompressedImage
from cv_bridge import CvBridge
from rclpy.node import Node


class ImageSubscriber(Node) : 
    def __init__(self) : 
        super().__init__("image_subscriber")
        self.subscription = self.create_subscription(
            CompressedImage,
            "/web_cam",
            self.callback,
            10
        )
        self.subscription
        self.bridge = CvBridge()

    def callback(self, msg) :
        image = np.frombuffer(msg.data, np.uint8)
        image_np = cv2.imdecode(image, cv2.IMREAD_COLOR)
        cv2.imshow("img", image_np)
        cv2.waitKey(33)

    
def main(args = None) : 
    rp.init(args=args)
    image_sub = ImageSubscriber()
    rp.spin(image_sub) # while 1 :
    
    image_sub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
