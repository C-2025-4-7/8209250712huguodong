#include "mytriangle.h.cpp"
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 <= side3) {
				return false;
	}
	if (side1 + side3 <= side2) {
		return false;
	}
	if (side3 + side2 <= side1) {
		return false;
	}
	return true;
}
double triangle_area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2.0;
	double area = sqrt(s*(s - side1) * (s - side2) * (s - side3));
	return area;
}