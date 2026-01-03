#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 > len2) return -1;

    for (int i = 0; i <= len2 - len1; i++) {
        bool found = true;

        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }

        if (found) return i;
    }

    return -1;  
}

int main() {
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH], s2[MAX_LENGTH];

    cout << "Enter the first string: ";
    cin.getline(s1, MAX_LENGTH);

    cout << "Enter the second string: ";
    cin.getline(s2, MAX_LENGTH);

    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << index << endl;

       
        cout << "\nVisual representation:" << endl;
        cout << "String 2: " << s2 << endl;
        cout << "String 1: ";
        for (int i = 0; i < index; i++) cout << " ";
        cout << s1 << " ¡û found at position " << index << endl;
    }
    else {
        cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is -1" << endl;
        cout << s1 << " is not a substring of " << s2 << endl;
    }

    cout << "\nAdditional test cases:" << endl;
    cout << "======================" << endl;

    char test1[] = "abc";
    char test2[] = "123abcdef";
    cout << "\"abc\" in \"123abcdef\": " << indexOf(test1, test2) << endl;
    char test3[] = "xyz";
    char test4[] = "abcdef";
    cout << "\"xyz\" in \"abcdef\": " << indexOf(test3, test4) << endl;

    char test5[] = "";
    char test6[] = "hello";
    cout << "\"\" in \"hello\": " << indexOf(test5, test6) << endl;

    return 0;
}