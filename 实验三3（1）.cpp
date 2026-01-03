#include<iostream>
#include<iomanip>
#include"mytriangle.h.cpp"
int main() {
	double side1, side2, side3;
	std::cout << "请输入三角形的三条边长：";
	std::cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3)) {
		double area = triangle_area(side1, side2, side3);
		std::cout << "三角形的面积为：" << std::fixed << std::setprecision(2) << area << std::endl;
	} else {
		std::cout << "输入的边长不能构成三角形！" << std::endl;
	}
	return 0;
}