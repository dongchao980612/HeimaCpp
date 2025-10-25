#ifndef WORKER_H_
#define WORKER_H_

#include <iostream>
#include <string>

//职工抽象类
class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual std::string getDeptName() = 0;

	int m_Id;//职工编号
	
	std::string m_Name; //职工姓名
	
	int m_DeptId;//部门编号
};
#endif