#ifndef MANAGER_H_
#define MANAGER_H_

#include <iostream>
#include <string>

#include "Worker.h"

class Manager : public Worker
{
   public:
	//构造函数
	Manager(int id, std::string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual std::string getDeptName();
};

//构造函数
Manager::Manager(int id, std::string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

//显示个人信息
void Manager::showInfo()
{
	std::cout << "职工编号： " << this->m_Id << "\t职工姓名： " << this->m_Name << "\t岗位： " << this->getDeptName()
	<< "\t岗位职责： 完成老板交给的任务，并下发任务给员工" << std::endl;
}

//获取岗位名称
std::string Manager::getDeptName() { return std::string("经理"); }


#endif
