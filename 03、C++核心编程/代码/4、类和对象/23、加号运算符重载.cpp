#include <iostream>

using namespace std;

class Person
{
   public:
	Person(){};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
    
	//成员函数实现 + 号运算符重载
	Person operator+(const Person& p) { return Person(this->m_A + p.m_A, this->m_B + p.m_B); }

   public:
	int m_A;
	int m_B;
};

//全局函数实现 + 号运算符重载
Person operator+(const Person& p1, const Person& p2) { return Person(p1.m_A + p2.m_A, p1.m_B + p2.m_B); }

//运算符重载 可以发生函数重载
Person operator+(const Person& p2, int val) { return Person(p2.m_A + val, p2.m_B + val); }

void test01()
{
	Person p1(10, 10);
	Person p2(20, 20);

	// 成员函数方式
	Person p3 = p2 + p1;  //相当于 p2.operaor+(p1)
	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
}

void test02()
{
	Person p1(10, 10);
	Person p2(20, 20);

	// 全局函数方式
	Person p3 = p2 + p1;  //相当于 p2.operaor+(p1)
	cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;
}


void test03()
{
	Person p1(10, 10);

	// 全局函数方式
	Person  p2 = p1 + 20; //相当于 operator+(p1,10)
	cout << "mA:" << p2.m_A << " mB:" << p2.m_B << endl;
}

int main(int argc, char const* argv[])
{
	test01();
	test02();
    test03();

	return 0;
}
