#include<iostream>

using namespace std;

int main() {
	char a;
	cin >> a;
	if (a - 'Z' > 0) {
		char b = a - ('a' - 'A');
		cout << b;
	}
	else
	{
		cout << (int)(a + 1);
	}
	return 0;
}