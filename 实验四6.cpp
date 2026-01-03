#include <iostream>
#include <cctype>  
using namespace std;

void count(const char s[], int counts[]) {
   
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (isalpha(ch)) {
           
            ch = tolower(ch);
            int index = ch - 'a';

            if (index >= 0 && index < 26) {
                counts[index]++;
            }
        }
    }
}

int main() {
    const int MAX_LENGTH = 1000;
    char str[MAX_LENGTH];
    int counts[26];

    cout << "Enter a string: ";
    cin.getline(str, MAX_LENGTH);

    count(str, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}