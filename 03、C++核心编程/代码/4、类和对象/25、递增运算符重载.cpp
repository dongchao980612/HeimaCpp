#include <iostream>

using namespace std;

class Integer
{
	friend ostream& operator<<(ostream& out, Integer myint);

   public:
	Integer(int num) { this->m_Num = num; }

	// 前置++
	Integer& operator++()
	{
		m_Num++;
		return *this;
	}

	// 后置++
	Integer operator++(int)
	{
		Integer old = *this;
		++(*this);
		return old;
	}

   private:
	int m_Num;
};
ostream& operator<<(ostream& out, Integer myint)
{
	out << myint.m_Num;
	return out;
}
// 前置++
void test01()
{
	Integer Int(48);
	cout << ++(++Int) << endl;
	cout << Int << endl;
}
// 后置++
void test02()
{
	Integer Int(48);
	cout << Int++ << endl;
	cout << Int << endl;
}
int main(int argc, char const* argv[])
{
	// test01();
	test02();
	return 0;
}