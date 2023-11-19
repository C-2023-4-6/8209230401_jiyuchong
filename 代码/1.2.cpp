#include<iostream>

using namespace std;

int main() {
	const float Pi = 3.1415926;
	float r, h;
	cin >> r >> h;
	cout << r * r * h * Pi / 3;
	return 0;
}