#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num) {
	if (num <= 1) return false;
	if (num == 2) return true;
	if (num % 2 == 0)return false;
	for (int i = 3; i <= sqrt(num); i += 2) {
		if (num % i == 0) { return false; }
	}
	return true;
}
int main() {
	int count =0;
	cout << "ËØÊý" << endl;
	for (int i = 2; i <= 200; i++) {
		if (is_prime(i)) {
			cout << i << " ";
			count++;
			if (count % 10 == 0) {
				cout << endl;
			}
		}
	}
	
	return 0;
}