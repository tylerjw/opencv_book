// Program to display a video from a file

// Video from http://ftp.nluug.nl/ftp/graphics/blender/apricot/trailer/sintel_trailer-480p.mp4

#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
  // Create a VideoCapture object to read from a video file
  VideoCapture cap("video.mp4");

  // Check if the file was openened properly 
  if(!cap.isOpened())
  {
    cout << "capture could not be opened succesfully" << endl;
    return -1;
  }

  namedWindow("Video");

  // Play the video in a loop till it ends
  while(char(waitKey(1)) != 'q' && cap.isOpened())
  {
    Mat frame;
    cap >> frame;
    // Check if the video is over
    if(frame.empty()) {
      cout << "Video over" << endl;
      break;
    }
    imshow("Video", frame);
  }
  return 0;
}