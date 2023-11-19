#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	int shuzi(0), zimu(0), konge(0),qita(0);

	for(int i = 0; i < str.size(); i++) {
		if (str[i]>='0'&&str[i]<='9') {
			shuzi++;
		}
		else if (str[i]=' ') {
			konge++;
		}
		else if ((str[i]>='a'&&str[i]<='z')||(str[i] >= 'A' && str[i] <= 'Z')) {
			zimu++;
		}
		else {
			qita++;
		}
	}

	cout << shuzi << endl
		<< zimu << endl
		<< konge << endl
		<< qita << endl;
	return 0;
}