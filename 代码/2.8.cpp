#include<iostream>

using namespace std;

double mqrt(double a) {
	double x1 = a, x2 = 0;
	x2 = (x1 + a / x1) / 2.0;
	while (x1 - x2 >= 0.00001) {
		double s = x2;
		x2 = (x2 + a / x2) / 2.0;
		x1 = s;
	}
	return x2;
}

int main() {
	double a;
	cin >> a;
	cout << mqrt(a);
	return 0;
}