import rclpy as rp
from rclpy.node import Node
import os
import time
import numpy as np
from turtlesim.srv import TeleportAbsolute
from turtlesim.srv import Spawn

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from first_package_msgs.srv import MultiSpawn



class MultiSpawning(Node) : 
    def __init__(self) :
        super().__init__("multi_spawn")
        self.server = self.create_service(MultiSpawn, "multi_spawn", self.callback_service)
        self.teleport = self.create_client(TeleportAbsolute, "/turtle1/teleport_absolute")
        self.spawn = self.create_client(Spawn, "/spawn")
        self.req_spawn = Spawn.Request()
        self.center_x = 5.54
        self.center_y = 5.54
        
        

    def callback_service(self, req, res) : 
        x, y, theta = self.calc_pos(req.num, 3)

        for n in range(len(theta)):
            self.req_spawn.x = x[n] + self.center_x
            self.req_spawn.y = y[n] + self.center_y
            self.req_spawn.theta = theta[n]
            self.spawn.call_async(self.req_spawn)
            
            time.sleep(0.1)
        res.x = x
        res.y = y
        res.theta = theta
        
        

        return res
    
    def calc_pos(self, n, r) :
        gap_theta = 2*np.pi / n
        theta = [gap_theta*n for n in range(n)]
        x = [r*np.cos(th) for th in theta]
        y = [r*np.sin(th) for th in theta]
        
        return x, y, theta

def main(args=None) : 
    rp.init(args=args)

    service = MultiSpawning()
    rp.spin(service)

    service.destroy_node()
    rp.shutdown()


if __name__ == "__main__" :
    main()