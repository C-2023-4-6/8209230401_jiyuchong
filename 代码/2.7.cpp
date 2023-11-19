#include<iostream>

using namespace std;

int main() {
	for (int i = 0; i < 5; i++) {
		for (int a = 0; a < i + 1; a++) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}