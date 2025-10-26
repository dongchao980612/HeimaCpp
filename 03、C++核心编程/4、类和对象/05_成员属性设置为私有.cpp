#include <iostream>
#include <string>

using namespace std;

class Person
{
   public:
	//姓名设置可读可写
	void setName(string name) { this->m_Name = name; }
	string getName() { return this->m_Name; }

	//获取年龄
	int getAge() { return this->m_Age; }
#if 1
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150) {
			cout << "年龄输出有误，请重新输入!" << endl;
			return;
		}
		this->m_Age = age;
	}
#endif

	//情人设置为只写
	void setLover(string lover) { this->m_Lover = lover; }

   private:
	string m_Name;	//可读可写  姓名

	int m_Age = 18;	 //只读  年龄

	string m_Lover;	 //只写  情人
};

int main(int argc, char const *argv[])
{
	// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
	// 优点2：对于写权限，我们可以检测数据的有效性

	Person p;

	// 姓名设置
	// p.m_Name="张三";
	p.setName("张三");
	cout << "姓名： " << p.getName() << endl;

	//年龄设置
	p.setAge(-50);
	cout << "年龄： " << p.getAge() << endl;

	//情人设置
	p.setLover("小丽");
	// cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
	return 0;
}
