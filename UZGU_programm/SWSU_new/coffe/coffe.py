import numpy as np
import cv2

coffe = cv2.imread('B:\\UZGU_programm\\Test OpenCV\\coffe.jpg')

cv2.imshow('Coffe', coffe)

print(coffe.shape)
frag = coffe[600:720, 1050:1280]

cv2.imshow('Part', frag)

cv2.waitKey()

