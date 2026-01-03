#include <iostream>
using namespace std;

int hexToDecimal(const char* hex) {
    int result = 0;

    for (int i = 0; hex[i]; i++) {
        char ch = hex[i];
        int value;

        if (ch >= '0' && ch <= '9') {
            value = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            value = 10 + (ch - 'A');
        }
        else if (ch >= 'a' && ch <= 'f') {
            value = 10 + (ch - 'a');
        }
        else {
            return -1;  
        }

        result = result * 16 + value;
    }

    return result;
}

int main() {
    char hexStr[100];

    cout << "输入十六进制数: ";
    cin >> hexStr;

    int decimal = hexToDecimal(hexStr);

    if (decimal != -1) {
        cout << "十进制值: " << decimal << endl;
    }
    else {
        cout << "输入错误！" << endl;
    }

    return 0;
}