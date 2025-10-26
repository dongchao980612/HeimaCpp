#include <iostream>

using namespace std;

class Person
{
   public:
#if 0
	//传统方式初始化
	Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}
#endif
	//初始化列表方式初始化
	Person() : m_A(10), m_B(20), m_C(30) {}
	Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}
	void PrintPerson() { cout << "m_A:" << m_A << "\tm_B:" << m_B << "\tm_C:" << m_C << endl; }

   private:
	int m_A;
	int m_B;
	int m_C;
};

int main(int argc, char const *argv[])
{
	// Person p(1, 2, 3);
	// p.PrintPerson();

	// Person p;
	// p.PrintPerson();

	Person p(1, 2, 3);
	p.PrintPerson();

	return 0;
}
