#import numpy as np
import cv2

cap = cv2.VideoCapture(0)

while(True):
    ret, frame = cap.read()
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    cv2.imshow('Video', frame)
    cv2.imshow('Frame', gray)
    cv2.imshow('Color', frame[ :, :, 0 ])
    print(frame)
    #print(gray)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        cv2.imwrite("B:\\VideoPyCharm\\frame.jpg", frame)
        break
cap.release()
cv2.destroyAllWindows()