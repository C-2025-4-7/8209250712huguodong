#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
				return a;
	}
	return gcd(b, a % b);
}
int lcm(int a, int b) {
		return a * b / gcd(a, b);
}

int main() {
	int a, b;
	cout << "请输入两个值";
	cin >> a >> b;
	cout << "最大公约数为：" << gcd(abs(a),abs(b)) << endl;
	cout<<"最小公倍数为：" << lcm(abs(a),abs(b)) << endl;
}