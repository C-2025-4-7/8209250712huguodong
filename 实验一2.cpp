#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141592653589793;

    double radius, height, volume;
    cout << "请输入圆锥底的半径: ";
    cin >> radius;

    cout << "请输入圆锥的高度: ";
    cin >> height;
    volume = (1.0 / 3.0) * PI * radius * radius * height;
    cout << "圆锥的体积为: " << volume << endl;

    return 0;
}