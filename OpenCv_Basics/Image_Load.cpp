#include<opencv2/core.hpp> //Main functionalities
#include<opencv2/highgui.hpp> // IO functions
#include<opencv2/imgcodecs.hpp> // To support other image formats
#include<iostream>
using namespace cv;
int main(int argc, char** argv)
{
    cv::Mat Image;
    Image = cv::imread("./Pictures/mufc_r.png", IMREAD_GRAYSCALE); // Give address of image as first arg of imread to load the image
    if(Image.empty())
    {
        std::cout<< "Couldn't load the image" <<std::endl;
        return -1;
    }
    cv::namedWindow("Display area", WINDOW_NORMAL| WINDOW_KEEPRATIO);// To create the Window to display the iamge
    cv::imshow("Display area", Image); // To show the image, keep the name of window same to manipulate the same window otherwise another window will be opened

    cv::waitKey(0); // To wait for milliseconds before closing, 0 means infinite
    return 0;
}