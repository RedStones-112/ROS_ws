import rclpy as rp
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from rclpy.node import Node


class ImageSubscriber(Node) : 
    def __init__(self) : 
        super().__init__("edge_pub")
        self.subscription = self.create_subscription(
            Image,
            "/web_cam",
            self.callback,
            10
        )
        self.publisher = self.create_publisher(
            Image,
            "/edge",
            10
        )
        self.subscription
        self.bridge = CvBridge()

        

    def callback(self, msg) :
        self.image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        gray_img = cv2.cvtColor(self.image, cv2.COLOR_BGR2GRAY)
        image = cv2.Canny(gray_img, 0, 200)
        
        img = self.bridge.cv2_to_imgmsg(image)
        self.publisher.publish(img)
        cv2.waitKey(1)

    
def main(args = None) : 
    rp.init(args=args)
    image_sub = ImageSubscriber()
    rp.spin(image_sub) # while 1 :
    
    image_sub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
