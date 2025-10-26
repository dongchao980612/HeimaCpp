#include <iostream>

using namespace std;

// 1、构造函数分类
//  按照参数分类分为 有参和无参构造   无参又称为默认构造函数
//  按照类型分类分为 普通构造和拷贝构造

class Person
{
   public:
	//构造函数
	Person() { cout << "Person的无参构造函数调用" << endl; }

	// 有参构造函数
	Person(int age)
	{
		this->m_Age = age;
		cout << "Person的有参构造函数调用" << endl;
	}

	// 拷贝构造函数
	Person(const Person& p)
	{
		this->m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}

	// 析构函数
	~Person() { cout << "Person的析构函数调用" << endl; }
	int m_Age;
};

void test01()
{
#if 0
	// 1  括号法，常用
	Person p1;		// 无参构造函数
	Person p2(10);	// 有参的构造函数
	Person p3(p2);	// 拷贝构造函数

	// cout << "p2的年龄：" << p2.m_Age << endl;
	// cout << "p3的年龄：" << p3.m_Age << endl;

    // 注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
#endif

#if 0
	// 2 显式法
	Person p1;				 // 无参构造
	Person p2 = Person(10);	 // 有参构造
	Person p3 = Person(p2);	 // 拷贝构造
							 // Person(10);  单独写就是匿名对象  当前行结束之后，马上析构

	// 注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
	// Person p5(p4);
#endif
	// 3 隐式转换法
	Person p1 = 10;	 // Person p1 = Person(10);
	Person p2 = p1;	 // Person p2 = Person(p1);
}

int main(int argc, char const* argv[])
{
	test01();
	return 0;
}
