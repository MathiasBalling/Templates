#include "Class.h"
#include <iostream>
int main() {
  // std::cout << "Hello World" << std::endl;
  cv::Mat src = cv::imread(
      "/Users/mathiaschristiansen/Desktop/Google_Calendar_icon_(2020).svg.png");
  cv::imshow("MyImage", src);
  cv::waitKey(0);
  return 0;
}