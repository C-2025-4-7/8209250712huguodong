#include<iostream>
using namespace std;
int main() {
	double x,y;
	cout << "x的值为:";
	cin >> x;
	if (0 < x < 10) {
		if (0 < x < 1) {
			double y = 3 - 2 * x;
			cout << "y的值为:" << y << endl;
		}
		else if (1 <= x < 5) {
			double y = 2 / 4 * x + 1;
			cout << "y的值为:" << y << endl;
		}
		else if (5 <= x < 10) {
			y = pow(x, 2);
			cout << "y的值为:" << y << endl;
		}
	}
	else {
		cout << "x的值不在规定范围内" << endl;
	}
	return 0;
}