#include <iostream>
using namespace std;

class Cuboid {
private:
    double length, width, height;
public:
    void setValue() {
        cin >> length >> width >> height;
    }

    double volume() {
        return length * width * height;
    }

    void showVolume() {
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Cuboid c1, c2, c3;

    cout << "Enter length, width, height for Cuboid 1: ";
    c1.setValue();
    cout << "Enter length, width, height for Cuboid 2: ";
    c2.setValue();
    cout << "Enter length, width, height for Cuboid 3: ";
    c3.setValue();

    c1.showVolume();
    c2.showVolume();
    c3.showVolume();

    return 0;
}