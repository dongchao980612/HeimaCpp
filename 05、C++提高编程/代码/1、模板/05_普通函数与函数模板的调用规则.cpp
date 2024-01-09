#include <iostream>

using namespace std;

//普通函数与函数模板调用规则
void myPrint(int a, int b) { cout << "调用的普通函数" << endl; }

template <typename T> void myPrint(T a, T b) { cout << "调用的模板" << endl; }

template <typename T> void myPrint(T a, T b, T c) { cout << "调用重载的模板" << endl; }

void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);	//调用普通函数

	// 2、可以通过空模板参数列表来强制调用函数模板
	myPrint<>(a, b);  //调用函数模板

	// 3、函数模板也可以发生重载
	int c = 30;
	myPrint(a, b, c);  //调用重载的函数模板

	// 4、 如果函数模板可以产生更好的匹配,优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);  //调用函数模板
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}