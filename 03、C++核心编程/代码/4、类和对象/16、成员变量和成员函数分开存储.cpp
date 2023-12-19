#include <iostream>

using namespace std;

class Person
{
	int m_A;		 // 非静态成员变量占对象空间
	static int m_B;	 // 静态成员变量不占对象空间

	// 函数也不占对象空间
	void func() { cout << "m_A:" << this->m_A << endl; }

	// 静态成员函数不占对象空间
	static void sfunc() { cout << "m_B:" << Person::m_B << endl; }
};

int Person::m_B = 0;
void test01()
{
	Person p;
	// 空对象占用内存空间为： 1
	//  分配一个字节空间，为了区分内存的位置
	cout << sizeof(p) << endl;
}

void test02()
{
	Person p;
	cout << sizeof(p) << endl;	// 4
}

int main(int argc, char const *argv[])
{
	// test01();
	test02();
	return 0;
}