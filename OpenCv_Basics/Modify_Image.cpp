#include<opencv2/core.hpp>
#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgcodecs.hpp>
#include<iostream>
using namespace cv;
int main(int argc, char** argv)
{
    cv::Mat Image;
    cv::Mat GrayScale;
    Image = cv::imread("sample.jpg", IMREAD_COLOR);
    if(Image.empty())
    {
        std::cout<< "No image Data\n" <<std::endl;
        return -1;
    }
    cv::cvtColor(Image, GrayScale, CV_BGR2GRAY);
    cv::imwrite("./Pictures/Fortnite_Gray.jpg", GrayScale);
    cv::namedWindow("Original Image", WINDOW_AUTOSIZE);
    cv::namedWindow("Grayscale Image", WINDOW_AUTOSIZE);

    cv::imshow("Original Image", Image);
    cv::imshow("Grayscale Image", GrayScale);

    cv::waitKey(0);
    return 0;
}