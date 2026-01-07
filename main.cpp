#include <iostream>
#include "student.h"
using namespace std;

int main() {
    Student stud;
    stud.set_value(7, "teg", 'm');
    stud.display();
    return 0;
}