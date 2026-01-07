#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}

    void setPoint(int i, int j) {
        x += i;
        y += j;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(60, 80);
    p.display();
    p.setPoint(10, 20);
    p.display();
    return 0;
}