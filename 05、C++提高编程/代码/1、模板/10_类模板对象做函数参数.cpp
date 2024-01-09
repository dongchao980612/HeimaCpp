#include <iostream>
#include <string>

using namespace std;

//类模板
template <class NameType, class AgeType = int> class Person
{
   public:
	Person(NameType name, AgeType age)
	{
		this->mName = name;
		this->mAge = age;
	}
	void showPerson() { cout << "name: " << this->mName << " age: " << this->mAge << endl; }

   public:
	NameType mName;
	AgeType mAge;
};

// 1、指定传入的类型
void printPerson1(Person<string, int> &p) { p.showPerson(); }
void test01()
{
	Person<string, int> p("孙悟空", 100);
	printPerson1(p);
}

// 2、参数模板化
template <class T1, class T2> void printPerson2(Person<T1, T2> &p)
{
	p.showPerson();
	cout << "p的类型为： " << typeid(p).name() << endl;
	cout << "T1的类型为： " << typeid(T1).name() << endl;
	cout << "T2的类型为： " << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int> p("猪八戒", 90);
	printPerson2(p);
}

// 3、整个类模板化
template <class T> void printPerson3(T &p)
{
	cout << "T的类型为： " << typeid(T).name() << endl;
	p.showPerson();
}
void test03()
{
	Person<string, int> p("唐僧", 30);
	printPerson3(p);
}

int main(int argc, char const *argv[])
{
	test01();
	test02();
	test03();

	return 0;
}
