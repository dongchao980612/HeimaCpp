#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

//第一种方式
#if 0
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
#endif

//第二种方式
#if 0
	char buf[1024] = {0};
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}
#endif

//第三种方式
#if 0
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
#endif

//第四种方式
#if 1
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}
#endif
	ifs.close();
}

int main()
{
	test01();

	return 0;
}