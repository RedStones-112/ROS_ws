import cv2
import numpy as np
from cv2 import aruco

def get_orientation_from_rvec(rvec):
    rotation_matrix, _ = cv2.Rodrigues(rvec)

    # Extract angles using rotation matrix
    roll = np.arctan2(rotation_matrix[2, 1], rotation_matrix[2, 2])
    pitch = np.arctan2(-rotation_matrix[2, 0], np.sqrt(rotation_matrix[2, 1] ** 2 + rotation_matrix[2, 2] ** 2))
    yaw = np.arctan2(rotation_matrix[1, 0], rotation_matrix[0, 0])

    return roll, pitch, yaw

# 아루코 딕셔너리와 파라미터 초기화
aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_4X4_50)
parameters = aruco.DetectorParameters()

# 카메라 캘리브레이션 매트릭스와 왜곡 계수 설정 (여기서는 예제 값 사용)
camera_matrix = np.array([[1000, 0, 320], [0, 1000, 240], [0, 0, 1]])
dist_coeffs = np.array([0, 0, 0, 0])

# 비디오 캡처 초기화
cap = cv2.VideoCapture(0)

while True:
    # 프레임 읽기
    ret, frame = cap.read()
    if not ret:
        break

    # 그레이스케일 변환
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # 아루코 마커 검출
    corners, ids, rejected = aruco.detectMarkers(gray, aruco_dict, parameters=parameters)

    if ids is not None:
        # 아루코 마커 포즈 추정
        rvecs, tvecs, _ = aruco.estimatePoseSingleMarkers(corners, 0.05, camera_matrix, dist_coeffs)

        # 각 마커에 대해
        for rvec, tvec in zip(rvecs, tvecs):
            # rvec와 tvec 출력
            print(f"rvec: {rvec}")
            print(f"tvec: {tvec}")

            # rvec를 yaw 값으로 변환
            roll, pitch, yaw = get_orientation_from_rvec(rvec)
            print(f"pitch: {np.degrees(pitch)} degrees")

            # # 마커 및 축 그리기
            # aruco.drawDetectedMarkers(frame, corners)
            # aruco.drawAxis(frame, camera_matrix, dist_coeffs, rvec, tvec, 0.1)
            
            # # rvec와 tvec를 프레임에 추가
            # position = (10, 50)
            # font = cv2.FONT_HERSHEY_SIMPLEX
            # font_scale = 0.5
            # color = (0, 255, 0)
            # thickness = 2
            # text = f"rvec: {rvec.flatten()}, tvec: {tvec.flatten()}, Yaw: {np.degrees(yaw)} degrees"
            # cv2.putText(frame, text, position, font, font_scale, color, thickness, cv2.LINE_AA)

    # 프레임 보여주기
    cv2.imshow('frame', frame)

    # 키 입력 처리
    key = cv2.waitKey(1) & 0xFF
    if key == ord('q'):
        break
    elif key == ord('c'):
        # 'c' 키를 누르면 사진을 찍고 저장
        filename = f"{rvec}.png"
        cv2.imwrite(filename, frame)
        print(f"Saved snapshot as {filename}")

# 비디오 캡처 해제 및 창 닫기
cap.release()
cv2.destroyAllWindows()