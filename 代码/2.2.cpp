#include<iostream>

using namespace std;

int main() {
	float x;
	cin >> x;
	if (x > 0 && x < 10) {
		if (x < 1) {
			cout << 3 - 2 * x;
		}
		else if (x < 5) {
			cout << 1 + 1 / (2 * x);
		}
		else {
			cout << x * x;
		}
	}
	return 0;
}