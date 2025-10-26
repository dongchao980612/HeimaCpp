#include <iostream>
#include <string>

using namespace std;

class MyPrint
{
   public:
	void operator()(string text) { cout << text << endl; }
};

void test01()
{
	//重载的（）操作符 也称为仿函数
	MyPrint myFunc;
	myFunc("hello world");	
    // myFunc.operator()("hello world");
}

class MyAdd
{
   public:
	int operator()(int v1, int v2) { return v1 + v2; }
};

void test02()
{
	MyAdd add;
	int ret = add(10, 10);
	cout << "ret = " << ret << endl;
	// add.operator()(100,100);

	//匿名对象调用
    // MyAdd().operator()(100,100);
	cout << "MyAdd()(100,100) = " << MyAdd()(100, 100) << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	test02();
	return 0;
}
