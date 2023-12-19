#include <iostream>

using namespace std;

class Person
{
   public:
	// this指针的本质是一个指针常量，指针的指向不可修改
	// Person * const this;
	// const Person * const this;
	void showPerson() const
	{
		// this=nullptr;
		// this->m_A = 100;
		this->m_B = 100;
	}
	void MyFunc() { this->m_A = 100; }
	int m_A;
	mutable int m_B;  //可修改 可变的
};

void test01()
{
	Person p;
	p.showPerson();
}

void test02()
{
	const Person p();
	// p.m_A=100;
	p.m_B = 100;
	p.showPerson();
	p.MyFunc();
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}
