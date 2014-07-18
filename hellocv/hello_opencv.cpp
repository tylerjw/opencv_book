#include <iostream>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main(int argc, char **argv)
{
  Mat im = imread("image.jpg", CV_LOAD_IMAGE_COLOR);
  namedWindow("Hello");
  imshow("Hello", im);
  cout << "Press 'q' to quit..." << endl;
  while(1) {
    if(char(waitKey(1)) == 'q') 
      break;
  }
  destroyAllWindows();
  return 0;
}