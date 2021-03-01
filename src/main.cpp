#include <iostream>
#include <cstdio>

#include "opencv2/core.hpp"

extern "C" {
double mycompute(double, double);
}

int main(void)
{
    cv::Mat I = cv::Mat::eye(3, 3, CV_64F);
    I.at<double>(0, 0) = mycompute(0.2, 0.4);
    std::cout << I << std::endl;

    return 0;
}