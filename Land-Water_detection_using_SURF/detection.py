#!/usr/bin/env python

import cv2
import numpy as np
import statistics
import time
from scipy import stats

#cap = cv2.VideoCapture('land.mp4')
cap = cv2.VideoCapture(1)

flag=0
t=[]
area=[]

while (True):
    ret, frame = cap.read()
    frame = cv2.resize(frame, (320,240))
    gray= cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    surf = cv2.xfeatures2d.SURF_create()
    kp = surf.detect(gray,None)
    #frame=cv2.drawKeypoints(frame,kp[:30],frame)
    frame=cv2.drawKeypoints(frame,kp[:30],frame,flags=cv2.DRAW_MATCHES_FLAGS_DRAW_RICH_KEYPOINTS)
    cv2.imshow('Keypoints', frame)
    cv2.waitKey(10)
    s=[]
    count = 0
    u=[0*i for i in range(30)] 
    for i in range(30):
        s.append(kp[i].size)
    
    if flag==1:
        for j in range(30):
            u[j]=t[j]-s[j]
        for k in range(30):
            if u[k]==0:
                count+=1
        if count>4:
            area.append('land')
        else:
            area.append('water')
    if len(area)==11:
        print(statistics.mode(area))
        area=[]        
    t=s
    flag=1
