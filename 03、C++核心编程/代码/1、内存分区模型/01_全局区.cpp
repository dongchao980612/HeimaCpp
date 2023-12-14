#include <iostream>

using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
	// 全局区

	// 全局变量 静态变量 常量(字符串常量、const修饰的全局变量)

	//普通局变量
	int a = 10;
	int b = 10;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "局部变量a地址为： " << (long)&a << endl;
	cout << "局部变量b地址为： " << (long)&b << endl;

	cout << "全局变量g_a地址为： " << (long)&g_a << endl;
	cout << "全局变量g_b地址为： " << (long)&g_b << endl;

	cout << "静态变量s_a地址为： " << (long)&s_a << endl;
	cout << "静态变量s_b地址为： " << (long)&s_b << endl;

	//字符串常量
	cout << "字符串常量地址为： " << (long)&"hello world" << endl;
	cout << "字符串常量地址为： " << (long)&"hello world1" << endl;

	// const修饰的变量

	// const修饰的全局变量 --> 全局常量

	cout << "全局常量c_g_a地址为： " << (long)&c_g_a << endl;
	cout << "全局常量c_g_b地址为： " << (long)&c_g_b << endl;

	// const修饰的局部变量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a地址为： " << (long)&c_l_a << endl;
	cout << "局部常量c_l_b地址为： " << (long)&c_l_b << endl;

	return 0;
}
