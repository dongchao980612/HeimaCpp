#include <iostream>

using namespace std;

// 编译器自动分配释放--不要返回局部变量的地址
// 栈区开辟的数据由编译器自动释放

int* func(int b)  //形参也会分配在栈区
{
	b = 100;
	int a = 10;	 //局部变量 存放在栈区，函数执行后自动释放

	return &a;	//返回局部变量的地址
}
int main()
{
	int* p = func(1);
	cout << *p << endl;

	return 0;
}