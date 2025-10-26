#include <iostream>

using namespace std;

//交换整型函数
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换浮点型函数
void swapDouble(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//利用模板提供通用的交换函数
template <typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a, b;

	// swapInt(a, b);

	//利用模板实现交换
	// 1、自动类型推导
	a = 10, b = 20;
	mySwap(a, b);
	cout << "a = " << a << "\tb = " << b << endl;

	// 2、显示指定类型
	a = 10, b = 20;
	mySwap<int>(a, b);
	cout << "a = " << a << "\tb = " << b << endl;
}

int main(int argc, char const* argv[])
{
	test01();
	return 0;
}
