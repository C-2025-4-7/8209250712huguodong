#include <iostream>
using namespace std;

int main() {
    int a[] = { 1, 2, 3 };
    int* p = a; 

    for (int i = 0; i < 3; i++) {
        cout << a[i] << ", " << p[i] << ", " << *(p + i) << ", " << *(a + i) << endl;
    }

    return 0;
}