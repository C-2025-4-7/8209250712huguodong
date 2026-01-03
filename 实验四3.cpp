#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_LOCKERS = 100;
    const int NUM_STUDENTS = 100;
    vector<bool> lockers(NUM_LOCKERS, false); 
    for (int student = 1; student <= NUM_STUDENTS; student++) {
        for (int locker = student; locker <= NUM_LOCKERS; locker += student) {
            lockers[locker - 1] = !lockers[locker - 1];  
        }
    }
    cout << "Open lockers: ";
    int count = 0;
    for (int i = 0; i < NUM_LOCKERS; i++) {
        if (lockers[i]) {
            cout << i + 1 << " ";
            count++;
        }
    }
    cout << endl;

    cout << "Total open lockers: " << count << endl;
    cout << "\nMathematical analysis:" << endl;
    cout << "Perfect squares (these lockers will be open): ";
    for (int i = 1; i * i <= NUM_LOCKERS; i++) {
        cout << i * i << " ";
    }
    cout << endl;

    return 0;
}