#include <iostream>
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/xfeatures2d.hpp"

using namespace cv;
using namespace std;
using namespace cv::xfeatures2d;

int main(int argc, char **argv){
	VideoCapture cap(0);

	if(!cap.isOpened())
		return -1;

	int flag = 0,k=0;

	int kp[10], u[10], t[10];
	string des[10];
	int i, j;
	
	while(1){
		Mat frame;
		cap >> frame;

		imshow("Display", frame);
		
		// int count=0;

		// cv::resize(frame, frame, cv::Size(320,240));

		// //Mat gray;
		// cvtColor(frame, frame, COLOR_BGR2GRAY);
		
		// int minHessian =0;
		// Ptr<SURF> detector = SURF::create( minHessian );
		// std::vector<KeyPoint> keypoints;
		// detector->detect( frame, keypoints );
		// //-- Draw keypoints
		// //Mat img_keypoints;
		// //drawKeypoints( frame, keypoints, img_keypoints );
		// //-- Show detected (drawn) keypoints
		// //imshow("SURF Keypoints", frame );
		// for (i=0;i<10;i++){
		// 	kp[i] = keypoints[i].size;
		// }

		
		// if (flag==1){
		// 	for (i=0;i<10;i++) {
		// 		u[i] = kp[i] - t[i];
		// 	}

		// 	for (j=0;j<10;j++) {
		// 		if (u[j]==0) {
		// 			count = count+1;
		// 		}
		// 	}



		// 	if (count>1){
		// 		cout << "land" << endl;
		// 	}
		// 	else {
		// 		cout << "water" << endl;
		// 	} 

		//}
		


		waitKey(50);

		// flag = 1;
		// for (i=0;i<10;i++){
		// 	t[i] = kp[i];
		// }


	}
	return 0;

}
