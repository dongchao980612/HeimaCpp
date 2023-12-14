#include <iostream>

using namespace std;

// 1、宏常量
#define day 7

int main(int argc, char const *argv[])
{
	cout << "一周里总共有 " << day << " 天" << endl;
	// day = 8;  //报错，宏常量不可以修改

	// 2、const修饰变量
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	// month = 24; //报错，常量是不可以修改的

	return 0;
}
