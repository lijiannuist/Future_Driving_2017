#include </usr/local/Cellar/opencv/3.3.1_1/include/opencv2/opencv.hpp>
#include </usr/local/Cellar/opencv/3.3.1_1//include/opencv2/highgui/highgui.hpp>
#include<string>
#include<vector>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{   
  cv::FileStorage xmlFile("test.xml", cv::FileStorage::WRITE, String("zh_CN.UTF-8"));
  int targetNumber = 1;
  xmlFile << "Frame00000TargetNumber" << targetNumber;
  xmlFile << "Frame00000Target00000" << "{";
  String type = "白色实线";
  xmlFile << "Type" << type;
  vector<cv::Point2i> position;
  position.push_back(cv::Point2i (302,901));
  position.push_back(cv::Point2i (620,433));
  xmlFile << "Position" << Mat(position);
  xmlFile << "}";  
  return 0;
}

