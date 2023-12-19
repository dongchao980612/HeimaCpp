#include <iostream>

using namespace std;

class Person
{
   public:
#if 0
	Person()
	{
		cout << "Person的无参构造函数!" << endl;
		this->m_Age = 0;
	}
#endif

#if 0
	Person(int age)
	{
		cout << "Person的有参构造函数!" << endl;
		this->m_Age = age;
	}
#endif

#if 1
	Person(const Person& p)
	{
		this->m_Age = p.m_Age;
		cout << "Person的拷贝构造函数!" << endl;
	}
#endif
	~Person() { cout << "Person的析构函数!" << endl; }

   public:
	int m_Age;
};

#if 0
void test01()
{
	Person p1;
	p1.m_Age = 18;
	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
	Person p2(p1);

	cout << "p2的年龄为： " << p2.m_Age << endl;
}
#endif

void test02()
{
#if 0
	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	// Person p1;		//此时如果用户自己没有提供默认构造，会出错
	Person p1(20);	//用户提供的有参
	Person p2(p1);	//此时如果用户没有提供拷贝构造，编译器会提供

    cout << "p2的年龄为： " << p2.m_Age << endl;
#endif

	//如果用户提供拷贝构造，编译器不会提供其他构造函数
	// Person p1;		//此时如果用户自己没有提供默认构造，会出错
	// Person p5(10);	//此时如果用户自己没有提供有参，会出错
	// Person p6(p5);	//用户自己提供拷贝构造
}

int main(int argc, char const* argv[])
{
	// test01();
	test02();
	return 0;
}
