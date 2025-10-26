#include <iostream>
#include <string>

using namespace std;
#if 0
// 如果传入的a和b是一个数组，就无法实现了
template <class T> void f(T a, T b) { a = b; }

// T的数据类型传入的是像Person这样的自定义数据类型，也无法正常运行
template <class T> void f1(T a, T b)
{
	if (a > b) {
		;
	}
}
#endif

class Person
{
   public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

//普通函数模板
template <class T> bool myCompare(T& a, T& b)
{
	if (a == b) {
		return true;
	} else {
		return false;
	}
}

//具体化优先于常规模板
template <> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age) {
		return true;
	} else {
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	//内置数据类型可以直接使用通用的函数模板
	bool ret = myCompare(a, b);
	if (ret) {
		cout << "a == b " << endl;
	} else {
		cout << "a != b " << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	//自定义数据类型，不会调用普通的函数模板
	//可以创建具体化的Person数据类型的模板，用于特殊处理这个类型
	bool ret = myCompare(p1, p2);
	if (ret) {
		cout << "p1 == p2 " << endl;
	} else {
		cout << "p1 != p2 " << endl;
	}
}

int main(int argc, char const* argv[])
{
	test01();
	test02();
    
	return 0;
}
