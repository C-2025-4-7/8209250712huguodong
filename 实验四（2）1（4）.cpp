#include <iostream>
using namespace std;

int* f() {
 
    int* arr = new int[4] {1, 2, 3, 4};
    return arr;
}

int main() {
    int* p = f();
    cout << p[0] << endl;  
    cout << p[1] << endl; 

 
    delete[] p;

    return 0;
}