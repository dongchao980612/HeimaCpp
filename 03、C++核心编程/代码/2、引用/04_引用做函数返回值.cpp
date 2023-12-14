#include <iostream>

using namespace std;

// 1、不要返回局部变量引用
int& test01()
{
	int a = 10;	 //局部变量，存放在栈区
	return a;
}
// 2、函数调用作为左值

int& test02()
{
	static int a = 20;	// 静态变量 全局区
	return a;
}
int main(int argc, char const* argv[])
{
#if 0
	// 1、不能返回局部变量的引用
	int& ref = test01();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
#endif

	// 2、如果函数做左值，那么必须返回引用
	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	return 0;
}
