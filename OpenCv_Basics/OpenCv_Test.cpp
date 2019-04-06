#include <opencv2/highgui.hpp>
#include <iostream>
 
int main( int argc, char** argv ) {
  
  cv::Mat image;
  image = cv::imread("sample.jpg" , CV_LOAD_IMAGE_COLOR);
  
  if(! image.data ) {
      std::cout <<  "Could not open or find the image" << std::endl ;
      return -1;
    }
  
  cv::namedWindow( "First TRY", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Second TRY", image );
  
  cv::waitKey(0);
  return 0;
}