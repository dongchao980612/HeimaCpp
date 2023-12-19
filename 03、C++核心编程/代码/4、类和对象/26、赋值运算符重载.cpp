
#include <iostream>

using namespace std;

class Person
{
   public:
	Person(int age)
	{
		m_Age = new int(age);  //将年龄数据开辟到堆区
	}
	//重载赋值运算符
	Person &operator=(Person &p)
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
		//编译器提供的代码是浅拷贝
		// m_Age = p.m_Age;

		//提供深拷贝 解决浅拷贝的问题
		m_Age = new int(*p.m_Age);

		//返回自身
		return *this;
	}
	~Person()
	{
		if (m_Age != NULL) {
			delete m_Age;
			m_Age = NULL;
		}
	}
	//年龄的指针
	int *m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;

	cout << "p1的年龄为：" << *p1.m_Age << endl;

	cout << "p2的年龄为：" << *p2.m_Age << endl;

	cout << "p3的年龄为：" << *p3.m_Age << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
