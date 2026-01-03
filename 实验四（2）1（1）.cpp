#include <iostream>
using namespace std;

int main() {
    int i, j, * p1, * p2; 

    p1 = &i;
    p2 = &j;

    i = 5;
    j = 7;

    cout << "i=" << i << ", j=" << j << endl;
    cout << "p1=" << p1 << ", p2=" << p2 << endl;  
    cout << "*p1=" << *p1 << ", *p2=" << *p2 << endl; 

    return 0;
}