import rclpy as rp
import cv2
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from rclpy.node import Node
from first_package_msgs.srv import Capture
from rcl_interfaces.msg import SetParametersResult

class ImageSubscriber(Node) : 
    def __init__(self) : 
        super().__init__("app")
        self.subscription = self.create_subscription(
            Image,
            "/web_cam",
            self.sub_callback,
            10
        )
        self.cap_server = self.create_service(
            Capture,
            "capture",
            self.callback_service_cap
        )
        # self.publisher = self.create_publisher(
        #     Image,
        #     "/edge",
        #     10
        # )
        self.subscription
        self.bridge = CvBridge()

        self.add_on_set_parameters_callback(self.parameters_callback)
        

    def sub_callback(self, msg) :
        self.image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        cv2.imshow("image", self.image)
        # gray_img = cv2.cvtColor(self.image, cv2.COLOR_BGR2GRAY)
        # image = cv2.Canny(gray_img, 0, 200)
        
        # img = self.bridge.cv2_to_imgmsg(image)
        # self.publisher.publish(img)
        cv2.waitKey(1)

    def callback_service_cap(self, req, res) :
        pass

    def parameters_callback(self, params) :
        for param in params :
            self.get_logger().info(param.name, "is change to ", param.value)

            if param.name == "quantile_time" :
                self.quantile_time = param.value
            if param.name == "almost_goal_dist" :
                self.almosts_dist = param.value

        self.get_logger().info(f" {self.quantile_time} {self.almosts_dist}")

        return SetParametersResult(successful = True)
    
def main(args = None) : 
    rp.init(args=args)
    image_sub = ImageSubscriber()
    rp.spin(image_sub) # while 1 :
    
    image_sub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
