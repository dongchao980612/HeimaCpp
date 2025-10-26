#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// 1、字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	// 2、字符型变量内存大小
	cout << sizeof(char) << endl;

	// 3、字符型变量常见错误
	// ch = "abcde"; //错误，不可以用双引号
	// ch = 'abcde'; //错误，单引号内只能引用一个字符

	// 4、字符型变量对应的ASCII编码
	cout << (int)ch << endl;  //查看字符a对应的ASCII码
	ch = 97;				  //可以直接用ASCII给字符型变量赋值
	cout << ch << endl;

	return 0;
}
