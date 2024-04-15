import rclpy as rp
import cv2
import numpy as np
from sensor_msgs.msg import CompressedImage
from cv_bridge import CvBridge
from rclpy.node import Node



class camPublisher(Node) : 
    def __init__(self) : 
        super().__init__("image_publisher")
        self.publisher = self.create_publisher(
            CompressedImage,
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
            result , encode_image = cv2.imencode(ext=".jpg", img=image)
            if result :
                img = CompressedImage()
                img.header.stamp = self.get_clock().now().to_msg()
                img.format = "jpeg"
                img.data = np.array(encode_image).tobytes()
                self.publisher.publish(img)
        
    
def main(args = None) : 
    rp.init(args=args)
    image_pub = camPublisher()
    rp.spin(image_pub) # while 1 :
    
    image_pub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
