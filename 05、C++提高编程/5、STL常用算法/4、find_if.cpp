#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//内置数据类型
class GreaterFive
{
   public:
	bool operator()(int val) { return val > 5; }
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i + 1);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "没有找到!" << endl;
	} else {
		cout << "找到大于5的数字:" << *it << endl;
	}
}

//自定义数据类型
class Person
{
   public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

   public:
	string m_Name;
	int m_Age;
};

class Greater20
{
   public:
	bool operator()(Person& p) { return p.m_Age > 20; }
};

void test02()
{
	vector<Person> v;

	//创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end()) {
		cout << "没有找到!" << endl;
	} else {
		cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
	}
}

int main(int argc, char const* argv[])
{
	test01();
	test02();
	return 0;
}