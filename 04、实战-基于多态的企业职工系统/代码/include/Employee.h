#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>

#include "Worker.h"

class Employee : public Worker
{
   public:
	//构造函数
	Employee(int id, std::string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual std::string getDeptName();
};
#endif