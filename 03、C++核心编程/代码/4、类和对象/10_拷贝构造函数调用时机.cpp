#include <iostream>

using namespace std;

class Person
{
   public:
	Person()
	{
		cout << "Person的无参构造函数!" << endl;
		m_Age = 0;
	}

	Person(int age)
	{
		cout << "Person的有参构造函数!" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		this->m_Age = p.m_Age;
		cout << "Person的拷贝构造函数!" << endl;
	}

	~Person() { cout << "Person的析构函数!" << endl; }

   public:
	int m_Age;
};

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(100);	 // p对象已经创建完毕
	Person p2(p1);	 //调用拷贝构造函数
}

// 2. 值传递的方式给函数参数传值
void doWork(Person p1) {}
void test02()
{
	Person p;  //无参构造函数
	doWork(p);
}

// 3. 以值方式返回局部对象
Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}

void test03()
{
	Person p = doWork2();
	cout << (int*)&p << endl;
}

int main(int argc, char const* argv[])
{
	// test01();
	// test02();
	test03();
	return 0;
}
