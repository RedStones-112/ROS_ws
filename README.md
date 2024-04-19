# camera_app_pkg
  ## 사용법
-     ros2 launch camera_app_pkg camera_app.launch.py로 노드들 활성화

# service
-     ros2 service call /capture first_package_msgs/srv/Capture "{}" : 지정된 경로에 사진 저장
-     ros2 service call /recode first_package_msgs/srv/Recode "{status: True}" : 지정된 경로에 영상 녹화 시작
-     ros2 service call /recode first_package_msgs/srv/Recode "{status: False}" : 지정된 경로에 영상 녹화 종료
- 
# param
-     msg_type
-       받아오는 토픽명 (default : /web_cam)
-         /web_cam : 기본 카메라 토픽
-         /edge : 엣지필터를 씌운 이미지 토픽
- 
-     path (default : /capture)
-         캡처, 녹화파일을 저장하는 경로값
# 필터노드추가
1. 필터노드를 추가한다면 /web_cam 토픽을 받아서 가공후 publish해주세요
2. camera_app_pkg/camera_app_pkg에 추가할 노트 .py파일을 추가해 주세요
3. camera_app_pkg/setup.py 파일의 entry_points에 추가할 노드를 추가해주세요
4. camera_app_pkg/camera_app.launch.py 파일에 Node를 추가해 주세요 name은 자유롭게 executable은 앞서 entry_points에 추가한 부분의 앞부분을 작성해주세요
)예시 'canny_pub = camera_app_pkg.canny_pub:main' 라면 canny_pub
5. 만약 노드에 파라미터초기값을 정해주고싶다면 path.yaml에 파라미터 초기값을 넣어주세요 양식은 똑같이 하되 맨 위의 노드명은 launch파일의 name에 작성한 부분을 적어주세요.
6. camera_app_pkg/camera_app.py의 ImageSubscriber 클래스의 __init__ 부분에 self.topic_list에 추가한 노드의 publish topic의 이름을 넣어주세요 
7. color이미지를 publish한다면 self.color_topic_list에 topic 이름을 넣어주세요 만약 grayscale 형태라면 self.gray_topic_list에 넣어주세요
