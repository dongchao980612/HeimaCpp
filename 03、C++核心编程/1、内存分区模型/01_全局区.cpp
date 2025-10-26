#include <iostream>

using namespace std;


int g_a = 10; // 全局变量
static  int g_s_a = 10;  // 全局静态变量

const int g_c_a = 10;  // 全局 常量
static const int g_s_c_a = 100;  //全局静态常量

int main()
{
	// 栈区       局部变量、局部常量
	// 全局区
	//     静态区 全局变量、全局静态变量、局部静态变量
	//	   常量区 全局常量、全局静态常量、局部静态常量


	int l_a = 10; // 局部变量
	static  int l_s_a = 10;  // 局部静态变量
	
	const int l_c_a = 10;  // 局部常量
	static const int l_s_c_a = 100;  //局部静态常量

	cout << "局部变量地址为： \t" << &l_a << endl;
	cout << "全局变量地址为： \t" << &g_a << endl;
	
	cout << "局部静态变量地址为： \t" << &l_s_a << endl;
	cout << "全局静态变量地址为： \t" << &g_s_a << endl;
	
	cout << "局部常量地址为： \t" << &l_c_a << endl;
	cout << "全局常量地址为： \t" << &g_c_a << endl;
	
	cout << "局部静态常量地址为： \t" << &l_s_c_a << endl;
	cout << "全局静态常量地址为： \t" << &g_s_c_a << endl;

	return 0;
}
