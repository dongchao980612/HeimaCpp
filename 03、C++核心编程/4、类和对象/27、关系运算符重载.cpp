#include <iostream>
#include <string>

using namespace std;

class Person
{
   public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(Person &p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		} else {
			return false;
		}
	}

	bool operator!=(Person &p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return false;
		} else {
			return true;
		}
	}

   private:
	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom", 18);
	Person p2("Tom", 18);

	if (p1 == p2) {
		cout << "a和b相等" << endl;
	} else {
		cout << "a和b不相等" << endl;
	}

	if (p1 != p2) {
		cout << "a和b不相等" << endl;
	} else {
		cout << "a和b相等" << endl;
	}
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
