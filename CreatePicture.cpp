#include <opencv2/opencv.hpp>

int main() {
    // 创建一个无符号 16 位单通道图像
    cv::Mat image16U = cv::Mat::zeros(100, 100, CV_16UC1);

    // 创建一个无符号 16 位三通道图像
    cv::Mat image16UC3 = cv::Mat::zeros(100, 100, CV_16UC3);

    // 创建一个 32 位浮点单通道图像
    cv::Mat image32F = cv::Mat::zeros(100, 100, CV_32FC1);

    // 创建一个 32 位浮点三通道图像
    cv::Mat image32FC3 = cv::Mat::zeros(100, 100, CV_32FC3);

    return 0;
}