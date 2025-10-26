#include <iostream>
#include <string>

using namespace std;

class Phone
{
   public:
	Phone(string name)
	{
		this->m_PhoneName = name;
		cout << "Phone的构造函数" << endl;
	}

	~Phone() { cout << "Phone的析构函数" << endl; }

	string m_PhoneName;
};

class Person
{
   public:
	//初始化列表可以告诉编译器调用哪一个构造函数
	Person(string name, string pName) : m_Name(name), m_Phone(pName) { cout << "Person的析构函数" << endl; }

	~Person() { cout << "Person的析构函数" << endl; }

	void playGame() { cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl; }

	string m_Name;
	Phone m_Phone;
};

void test01()
{
	//当类中成员是其他类对象时，我们称该成员为 对象成员
	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	//析构顺序与构造相反
	Person p("张三", "苹果X");
	p.playGame();
}
int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
