import rclpy as rp
import cv2
import os
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from rclpy.node import Node
from first_package_msgs.srv import Capture
from first_package_msgs.srv import Recode
from rcl_interfaces.msg import SetParametersResult

class ImageSubscriber(Node) : 
    def __init__(self) : 
        super().__init__("app")
        
        self.cap_server = self.create_service(
            Capture,
            "capture",
            self.callback_service_cap
        )

        self.recode_server = self.create_service(
            Recode,
            "recode",
            self.recode_callback
        )
        self.file_name = "capture.jpg"
        
        self.bridge = CvBridge()
        
        self.recode_status = False
        self.old_recode_status = False
        self.fourcc = cv2.VideoWriter_fourcc(*"XVID")

        self.declare_parameter("path", "")
        self.declare_parameter("msg_type", "")
        

        path = self.get_parameters(["path"])
        msg_type = self.get_parameters(["msg_type"])

        self.msg_type = msg_type[0].value
        self.path = path[0].value

        self.change_subscriber()
        self.add_on_set_parameters_callback(self.parameters_callback)
        

    def change_subscriber(self):
        
        self.subscription = self.create_subscription(
            Image,
            self.msg_type,
            self.sub_callback,
            10
        )
        self.subscription

    def sub_callback(self, msg) :
        try:
            self.image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        except:
            self.image = self.bridge.imgmsg_to_cv2(msg, "passthrough")

        if self.recode_status and self.recode_status != self.old_recode_status:
            self.out = cv2.VideoWriter((self.path + 'camera_app.avi'), self.fourcc, 20, (self.image.shape[1], self.image.shape[0]))
        
        elif self.recode_status:
            self.out.write(self.image)

        else :
            if self.recode_status != self.old_recode_status:
                self.out.release()
                self.get_logger().info("recoding is end")
        
        self.old_recode_status = self.recode_status
    
    def callback_service_cap(self, req, res) :
        cv2.imwrite((self.path + self.file_name), self.image)
        res.save_path = self.path
        return res
        
    def recode_callback(self, req, res) :
        self.recode_status = req.status
        res.save_path = self.path
        return res
        


    def parameters_callback(self, params) :
        for param in params :
            

            if param.name == "path" :
                self.path = param.value
            if param.name == "msg_type" :
                self.msg_type = param.value
            self.get_logger().info(f"name : {param.name}, value : {param.value}")
        self.change_subscriber()

        return SetParametersResult(successful = True)
    
def main(args = None) : 
    rp.init(args=args)
    image_sub = ImageSubscriber()
    rp.spin(image_sub) # while 1 :
    
    image_sub.destroy_node()
    rp.shutdown()
    


if __name__ == "__main__" : 
    main()
