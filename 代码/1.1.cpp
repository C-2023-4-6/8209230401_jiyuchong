#include<iostream>
using namespace std;
int main()
{
	int k = 1;
	int i = k + 1;     //int是C++中的关键字，不可以随意改变大小写
	                   //k未定义，未初始化
	cout << i++ << endl;
	i = 1;         //i重复定义
	cout << i++ << endl;
	cout << "Welcome to C++"<<endl;
	return 0;
}
