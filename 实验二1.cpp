#include<iostream>
using namespace std;
int main() {
	char ch;
	cout << "请输入一个字符: ";
	cin >> ch;
	if (ch >= 'a' && ch <= 'z') {
		char upper = toupper(ch);
		cout << "大写字母为: " << upper << endl;
	}
	else {
		cout << "字符" << ch << "的ASCII码是" << static_cast<int>(ch) << std::endl;
		return 0;
	}
}