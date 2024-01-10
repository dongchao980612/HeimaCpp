#include "Employee.h"

//构造函数
Employee::Employee(int id, std::string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Employee::showInfo()
{
	std::cout << "职工编号： " << this->m_Id << "\t职工姓名： " << this->m_Name << "\t岗位： " << this->getDeptName()
			  << "\t岗位职责： 完成经理交给的任务" << std::endl;
}

//获取岗位名称
std::string Employee::getDeptName() { return std::string("Ա��"); }