#include <iostream>
using namespace std;
int peaches(int day) {
 
    if (day == 10) {
        return 1;
    }
    return (peaches(day + 1) + 1) * 2;
}

int main() {
    int total = peaches(1);

    cout << "计算结果：第一天摘了 " << total << " 个桃子" << endl;
    cout << endl;
    cout << "每天的桃子数量变化：" << endl;
    cout << "天数\t早上桃子数\t吃掉数量\t剩余数量" << endl;

    for (int day = 1; day <= 10; day++) {
        int morning = peaches(day);  
        int eat = morning / 2 + 1;   
        int remaining = morning - eat; 

        cout << day << "\t" << morning << "\t\t" << eat << "\t\t";

        if (day == 10) {
            cout << "（最后1个）" << endl;
        }
        else {
            cout << remaining << "（第" << day + 1 << "天早上）" << endl;
        }
    }

    return 0;
}