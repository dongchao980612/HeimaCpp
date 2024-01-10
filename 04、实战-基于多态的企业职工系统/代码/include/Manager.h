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
#endif