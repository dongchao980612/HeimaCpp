#include <iostream>
#include <string>
using namespace std;

// string查找和替换
void test01()
{
	//查找
	string str1 = "abcdefgde";

	int pos = str1.find("de");	// 第一次位置

	if (pos == -1) {
		cout << "未找到" << endl;
	} else {
		cout << "pos = " << pos << endl;
	}

	pos = str1.rfind("de");	 // 最后一次位置

	cout << "pos = " << pos << endl;
}

void test02()
{
	//替换
	string str1 = "abcdefgde";
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	test02();

	return 0;
}
