#include <iostream>

using namespace std;

class Person
{
   public:
	void ShowPersonName() { cout << "我是Person类!" << endl; }

	void ShowPersonAge()
	{
		if (this == NULL) {
			return;
		}
		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;
};

void test01()
{
	Person* p = nullptr;
	// p->ShowPersonName();

	// p = new Person;
	p->ShowPersonAge();
}

int main(int argc, char const* argv[])
{
	test01();

	// test02();

	return 0;
}