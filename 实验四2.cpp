#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double list[], int listSize) {
    bool changed = true;

    do {
        changed = false;
        for (int i = 0; i < listSize - 1; i++) {
            if (list[i] > list[i + 1]) {
             
                double temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                changed = true;
            }
        }
        listSize--; 
    } while (changed);
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "Enter ten double numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }
    bubbleSort(numbers, SIZE);
    cout << "The sorted numbers are: ";
    cout << fixed << setprecision(2);
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "\nSorting process demonstration:" << endl;
    double demo[] = { 3.5, 2.1, 4.8, 1.2, 5.3 };
    int demoSize = 5;

    cout << "Original: ";
    for (int i = 0; i < demoSize; i++) cout << demo[i] << " ";
    cout << endl;

    bubbleSort(demo, demoSize);
    cout << "Sorted: ";
    for (int i = 0; i < demoSize; i++) cout << demo[i] << " ";
    cout << endl;

    return 0;
}