#include<iostream>

using namespace std;

int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if ((a, b, c > o) && (a + b > c) && (a + c > b) && (b + c > a)) {
		cout << a + b + c << endl;
		if (a == b || a == c || b == c) {
			cout << "�ǵ���������";
		}
	}
	else {
		cout << "���������������";
	}
	return 0;
}