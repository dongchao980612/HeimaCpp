#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a = 10;
	// 1、引用必须初始化

	// int &b; // 错误，引用必须初始化
	int b = 20;

	// 一旦初始化后，就不可以更改
	int c = 20;
	b = c;	// 这是赋值操作，不是更改引用

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}