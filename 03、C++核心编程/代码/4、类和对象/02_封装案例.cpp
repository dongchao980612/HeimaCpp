#include <iostream>
#include <string>

using namespace std;

//学生类
class Student
{
   public:
	void setName(string name) { this->m_Name = name; }
	void setID(int id) { this->m_Id = id; }

	void showStudent() { cout << "name:" << this->m_Name << " ID:" << this->m_Id << endl; }

   public:
	string m_Name;
	int m_Id;
};

int main(int argc, char const *argv[])
{
	Student stu_zs;
	stu_zs.setName("张三");
	stu_zs.setID(10001);

	stu_zs.showStudent();

	Student stu_ls;
	stu_ls.setName("李四");
	stu_ls.setID(10002);

	stu_ls.showStudent();

	return 0;
}
