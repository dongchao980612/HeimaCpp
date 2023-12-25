#include <iostream>
#include <string>

using namespace std;

// 2、全局函数配合友元  类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
//让编译器知道有person存在
template <class T1, class T2> class Person;

//让编译器知道有printPerson2存在
template <class T1, class T2> void printPerson2(Person<T1, T2> &p);

template <class T1, class T2> class Person
{
	// 1、全局函数配合友元   类内实现
	friend void printPerson(Person<T1, T2> &p) { cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl; }

	//全局函数配合友元  类外实现
	// 空模板参数列表还需要
	// 让编译器提前知道有这个模板函数存在
	friend void printPerson2<>(Person<T1, T2> &p);

   public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

   private:
	T1 m_Name;
	T2 m_Age;
};

// 1、全局函数在类内实现
void test01()
{
	Person<string, int> p("Tom", 20);
	printPerson(p);
}

template <class T1, class T2> void printPerson2(Person<T1, T2> &p)
{
	cout << "类外实现 ---- 姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
}

// 2、全局函数在类外实现
void test02()
{
	Person<string, int> p("Jerry", 30);
	printPerson2(p);
}

int main(int argc, char const *argv[])
{
	test01();
	test02();

	return 0;
}
