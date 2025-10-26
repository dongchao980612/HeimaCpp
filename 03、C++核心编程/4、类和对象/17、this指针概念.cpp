#include <iostream>

using namespace std;

class Person
{
   public:
	Person(int age)
	{
		// 1、当形参和成员变量同名时，可用this指针来区分
		this->m_Age = age;
	}

	Person& PersonAddPerson(Person p)
	{
		this->m_Age += p.m_Age;
		// 2、返回对象本身
		return *this;
	}

	int m_Age;
};

// 1、当形参和成员变量同名时，可用this指针来区分
void test01()
{
	Person p1(10);
	cout << "p1.age = " << p1.m_Age << endl;
}

// 2、在类的非静态成员函数中返回对象本身，可使用return *this
void test02()
{
	Person p1(10), p2(20);
	p1.PersonAddPerson(p2).PersonAddPerson(Person(30));

    cout << "p1.age = " << p1.m_Age << endl;
}
int main(int argc, char const* argv[])
{
	// test01();

	test02();

	return 0;
}