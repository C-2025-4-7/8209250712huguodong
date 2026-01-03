#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int F = 0;
	cout << "请输入华氏温度: " << endl;
	cin >> F;
	double C = (F - 32) / 1.8;
	cout << "对应的摄氏温度为: " << fixed << setprecision(2)<< C << endl;
	return 0;
}