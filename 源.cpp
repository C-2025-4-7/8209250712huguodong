#include <iostream>
using namespace std;

void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
             
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "输入数组大小: ";
    cin >> n;

    int* arr = new int[n];

    cout << "输入 " << n << " 个数: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "排序前: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "排序后: ";
    printArray(arr, n);

    delete[] arr;

    return 0;
}