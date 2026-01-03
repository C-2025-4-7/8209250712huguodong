#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "请输入两个正整数: ";
    cin >> a >> b;

    int m = a, n = b;

    // 求最大公约数
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    int gcd = a;

    // 最小公倍数
    int lcm = m * n / gcd;

    cout << "最大公约数: " << gcd << endl;
    cout << "最小公倍数: " << lcm << endl;

    return 0;
}