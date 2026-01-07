#include <iostream>
using namespace std;

class Student {
private:
    int id;
    float score;
public:
    void setValue(int i, float s) {
        id = i;
        score = s;
    }

    int getId() { return id; }
    float getScore() { return score; }
};

void max(Student* p, int n) {
    float maxScore = p->getScore();
    int maxId = p->getId();
    for (int i = 1; i < n; i++) {
        if ((p + i)->getScore() > maxScore) {
            maxScore = (p + i)->getScore();
            maxId = (p + i)->getId();
        }
    }
    cout << "Max Score Student ID: " << maxId << endl;
}

int main() {
    Student stu[5];
    for (int i = 0; i < 5; i++) {
        int id;
        float score;
        cout << "Enter ID and Score for student " << i + 1 << ": ";
        cin >> id >> score;
        stu[i].setValue(id, score);
    }
    max(stu, 5);
    return 0;
}