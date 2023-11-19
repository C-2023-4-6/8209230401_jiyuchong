#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int minn(a * b), maxx(0);

	for (int i = 1; i <= a*b; i++) {
		if (a % i == 0 && b % i == 0) {
			maxx = (maxx > i) ? maxx : i;
		}
		if (i % a == 0 && i % b == 0) {
			minn = (minn < i) ? minn : i;
		}
	}

	cout << maxx << endl
		<< minn << endl;
	return 0;
}