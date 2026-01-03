#include <iostream>
using namespace std;

int main() {
    const double price = 0.8;
    int totalApples = 0;
    int dayCount = 0;
    int applesToday = 2;
    double totalCost = 0;

    while (totalApples + applesToday <= 100) {
        double costToday = applesToday * price;
        totalCost += costToday;
        totalApples += applesToday;
        dayCount++;

        cout << "第" << dayCount << "天: 买" << applesToday
            << "个苹果, 花费" << costToday << "元" << endl;

        applesToday *= 2;
    }

    double averageCost = totalCost / dayCount;
    cout << "总天数: " << dayCount << endl;
    cout << "总苹果数: " << totalApples << endl;
    cout << "总花费: " << totalCost << "元" << endl;
    cout << "每天平均花费: " << averageCost << "元" << endl;

    return 0;
}