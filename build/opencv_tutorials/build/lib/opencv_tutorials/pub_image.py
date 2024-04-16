import rclpy as rp
import cv2
import time
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
        self.declare_parameter('width', 320)
        self.width = self.get_parameter('width').value
        self.declare_parameter('length', 240)
        self.length = self.get_parameter('length').value
        output_msg = "Video Width : " + str(self.width) + "\n\r"
        output_msg = output_msg + "Video Length : " + str(self.length)
        self.get_logger().info(output_msg)
        
        self.bridge = CvBridge()
        timer_priod = 0.01
        self.timer = self.create_timer(timer_priod, self.timer_callback)
        self.cap = cv2.VideoCapture(0)

    def timer_callback(self) :
        start_time = time.time()
        ret, image = self.cap.read()
        print(time.time() - start_time)
        image = cv2.resize(image, (self.width, self.length))
        if ret == True :
            img = self.bridge.cv2_to_imgmsg(image, "bgr8")
            self.publisher.publish(img)
            # cv2.waitKey(1)

    def __del__(self) :
        self.cap.release()
    
def main(args = None) : 
    rp.init(args=args)
    image_pub = camPublisher()
    rp.spin(image_pub) # while 1 :
    
    image_pub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
