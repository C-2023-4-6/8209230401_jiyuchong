#include<iostream>

using namespace std;

int main() {
	float a, b;
	cin >> a, b;
	char c;
	cin >> c;
	switch (c) {
	case '+':
		cout << "a+b=" << a + b << endl;
		break;
	case '-':
		cout << "a-b=" << a - b << endl;
		break;
	case '*':
		cout << "a*b=" << a * b << endl;
		break;
	case '/':
		if (b == 0) {
			cout << "��ʽ������";
		}
		else {
			cout << "a/b=" << a / b << endl;
		}
		break;
	default:
		cout << "��������Ϸ�";
	}
	return 0;
}