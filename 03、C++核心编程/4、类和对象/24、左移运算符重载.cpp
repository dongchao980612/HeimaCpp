#include <iostream>

using namespace std;

class Person
{
	friend ostream& operator<<(ostream& out, Person& p);

   public:
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	// 成员函数 实现不了  p << cout 不是我们想要的效果
	// void operator<<(Person& p) {}

   private:
	int m_A;
	int m_B;
};

//全局函数实现左移重载
// ostream对象只能有一个

ostream& operator<<(ostream& out, Person& p)
{
	out << "a:" << p.m_A << " b:" << p.m_B;
	return cout;
}

#if 0
void test01()
{
	Person p1(10, 20);
	cout << "a:" << p1.m_A << " b:" << p1.m_B;
}
#endif

void test02()
{
	Person p1(10, 20);
	cout << p1 << endl;
}

int main(int argc, char const* argv[])
{
	test02();

	return 0;
}