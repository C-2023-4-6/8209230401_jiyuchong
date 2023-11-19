#include<iostream>

using namespace std;

int main() {
	int num = 2;
	int sum = 0, day = 0;
	while (sum <= 100) {
		day++;
		sum += num;
		num *= 2;
	}
	cout << (sum * 4) / (day * 5);
	return 0;
}