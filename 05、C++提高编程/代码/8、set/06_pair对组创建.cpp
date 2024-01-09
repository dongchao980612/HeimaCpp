#include <iostream>
#include <set>
#include <string>

using namespace std;

// pair 对组创建
void test01()
{
	pair<string, int> p(string("Tom"), 20);
	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;

	pair<string, int> p2 = make_pair("Jerry", 10);
	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
}

int main(int argc, char const *argv[])
{
	test01();

	return 0;
}