// Function to change betweeen color and grawscale representationsl of image using a GUI trackbar

#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

// Global variables
const int slider_max = 1;
int slider;
Mat img;

// Callback function for trackbar event
void on_trackbar(int pos, void *)
{
  Mat img_converted;
  if(pos > 0) cvtColor(img, img_converted, CV_RGB2GRAY);
  else img_converted = img;

  imshow("Trackbar app", img_converted);
}

int main() 
{
  img = imread("image.jpg");

  namedWindow("Trackbar app");
  imshow("Trackbar app", img);

  slider = 0;

  createTrackbar("RGB <-> Grayscale", "Trackbar app", &slider, slider_max, on_trackbar);
  while(char(waitKey(1)) != 'q');

  return 0;
}