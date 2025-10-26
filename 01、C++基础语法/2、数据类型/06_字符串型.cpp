#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	// 1、C风格字符串
	// 注意事项 1：char 字符串名[]
	// 注意事项 2：等号后面 要用双引号 包含起来字符串
	char str1[] = "hello world";
	cout << str1 << endl;

	// 2、C++风格字符串
	// 需要包含头文件 <string>
	string str2 = "hello world";
	cout << str2 << endl;

	return 0;
}
