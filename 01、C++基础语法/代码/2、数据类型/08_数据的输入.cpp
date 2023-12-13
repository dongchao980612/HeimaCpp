#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	// 1、整型输入
	int a = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a;
	cout << "整型变量 a = " << a << endl;

	// 2、浮点型输入
	double d = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> d;
	cout << "浮点型变量 d = " << d << endl;

	// 3、字符型输入
	char ch = 0;
	cout << "请输入字符型变量：" << endl;
	cin >> ch;
	cout << "字符型变量 ch = " << ch << endl;

	// 4、字符串型输入
	string str;
	cout << "请输入字符串型变量：" << endl;
	cin >> str;
	cout << "字符串型变量 str = " << str << endl;

	// 5、布尔类型输入
	bool flag = true;
	cout << "请输入布尔型变量：" << endl;
	cin >> flag;
	cout << "布尔型变量 flag = " << flag << endl;

	return 0;
}
