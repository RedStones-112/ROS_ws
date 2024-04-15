import rclpy as rp
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from rclpy.node import Node



class camPublisher(Node) : 
    def __init__(self) : 
        super().__init__("image_publisher")
        self.publisher = self.create_publisher(
            Image,
            "/web_cam",
            10
        )
        self.bridge = CvBridge()
        timer_priod = 0.001
        self.timer = self.create_timer(timer_priod, self.timer_callback)
        self.cap = cv2.VideoCapture(0)

    def timer_callback(self) :
        ret, image = self.cap.read()
        if ret == True :
            img = self.bridge.cv2_to_imgmsg(image, "bgr8")
            self.publisher.publish(img)
        
    
def main(args = None) : 
    rp.init(args=args)
    image_pub = camPublisher()
    rp.spin(image_pub) # while 1 :
    
    image_pub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
