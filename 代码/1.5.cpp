#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	float f;
	cin >> f;
	cout << fixed << setprecision(2) << (f - 32.0) / 1.8;
	return 0;
}