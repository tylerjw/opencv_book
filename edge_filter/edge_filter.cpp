// Program to apply a simple filter matrix to an image

#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("../crop/image.JPG", CV_LOAD_IMAGE_GRAYSCALE), img_filtered;

	// Filter kernel for detecting vertical edges
	float vertical_fk[5][5] = {{0,0,0,0,0},{0,0,0,0,0},{-1,-2,6,-2,-1},{0,0,0,0,0},{0,0,0,0,0}};
	// Filter kernel for detecting horizontal edges
	float horizontal_fk[5][5] = {{0,0,-1,0,0},{0,0,-2,0,0},{0,0,6,0,0},{0,0,-2,0,0},{0,0,-1,0,0}};


	Mat filter_kernel = Mat(5,5,CV_32FC1, vertical_fk);

	// Apply filter
	filter2D(img, img_filtered, -1, filter_kernel);

	namedWindow("Image");
	namedWindow("Filtered Image");
	imshow("Image", img);
	imshow("Filtered Image", img_filtered);

	imwrite("vert_filtered_image.jpg", img_filtered);

	while(char(waitKey(1)) != 'q');

	return 0;
}