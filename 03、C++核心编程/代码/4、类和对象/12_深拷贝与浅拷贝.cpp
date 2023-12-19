#include <iostream>

using namespace std;

class Person
{
   public:
	//无参（默认）构造函数
	Person() { cout << "Person的无参构造函数!" << endl; }

	//有参构造函数
	Person(int age, int height)
	{
		cout << "Person的有参构造函数!" << endl;

		this->m_Age = age;
		this->m_Height = new int(height);
	}
#if 1
	//拷贝构造函数
	Person(const Person& p)
	{
		cout << "Person的拷贝构造函数!" << endl;
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		this->m_Age = p.m_Age;
		// this->m_Height=p.m_Height;  //编译实现的代码
		this->m_Height = new int(*p.m_Height);
	}
#endif
	//析构函数
	~Person()
	{
		cout << "析构函数!" << endl;
		if (m_Height != NULL) {
			delete m_Height;
		}
		m_Height = NULL;
	}

   public:
	int m_Age;
	int* m_Height;
};

void test01()
{
	Person p1(18, 180);
	cout << "p1的年龄： " << p1.m_Age << " 身高： " << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄： " << p2.m_Age << " 身高： " << *p2.m_Height << endl;
}

int main(int argc, char const* argv[])
{
	test01();
	return 0;
}
