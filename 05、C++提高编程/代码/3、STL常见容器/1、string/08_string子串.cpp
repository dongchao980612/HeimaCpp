#include <iostream>
#include <string>
using namespace std;

// string子串
void test01()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	string email = "zhangsan@sina.com";
	int pos = email.find("@");
    cout << "pos: " << pos << endl;
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;
}

int main(int argc, char const *argv[])
{
	test01();

	return 0;
}
