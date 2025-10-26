#include <iostream>
#include <string>
using namespace std;

// string字符串插入和删除
void test01()
{
	string str = "hello";
	str.insert(1, "111");
	cout << str << endl;

	str.erase(1, 3);  //从1号位置开始3个字符
	cout << str << endl;
}

int main(int argc, char const *argv[])
{
	test01();

	return 0;
}
