#include "Boss.h"

//构造函数
Boss::Boss(int id, std::string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Boss::showInfo()
{
	std::cout << "职工编号： " << this->m_Id << "\t职工姓名： " << this->m_Name << "\t岗位： " << this->getDeptName()
			  << "\t岗位职责： 管理公司所有事务" << std::endl;
}

//获取岗位名称
std::string Boss::getDeptName() { return std::string("总裁"); }