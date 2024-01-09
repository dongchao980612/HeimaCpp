#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//自定义数据类型
class Person
{
   public:
	Person(string name, int age)
	{
		mName = name;
		mAge = age;
	}

   public:
	string mName;
	int mAge;
};

void test01()
{
	vector<Person> v;

	//创建数据
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "Name:" << (*it).mName << "\tAge:" << (*it).mAge << endl;
	}
}

//放对象指针
void test02()
{
	vector<Person *> v;

	//创建数据
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++) {
		Person *p = (*it);
		cout << "Name:" << p->mName << "\tAge:" << (*it)->mAge << endl;
	}
}
int main(int argc, char const *argv[])
{
	test01();
	cout << endl;
	test02();
	return 0;
}
