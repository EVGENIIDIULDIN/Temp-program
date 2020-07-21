import numpy as np
import cv2


cats = cv2.imread('B:\\UZGU_programm\\Test OpenCV\\sobak3.jpg')
cv2.imshow('cats', cats)


# Выделим объект
low_red = (17,50,110)
high_red = (101,140,180)
only_cat = cv2.inRange(cats, low_red, high_red)
cv2.imshow('only cats', only_cat)


# Уберём шумы
cat_hsv = cv2.cvtColor(cats, cv2.COLOR_BGR2HSV) #Преобразуем в HSV
cat_color_low = (7,40,60) #Данный цвет это темный ненасыщенный красный, близкий к бордовому
cat_color_high = (18,255,200) #Данный цвет это светлый насыщенный оранджевый
only_cat_hsv = cv2.inRange(cat_hsv, cat_color_low, cat_color_high)
cv2.imshow('cat_color_hsv', only_cat_hsv)


cv2.waitKey()