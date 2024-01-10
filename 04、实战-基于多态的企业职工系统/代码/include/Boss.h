#ifndef BOSS_H_
#define BOSS_H_

#include <iostream>
#include <string>

#include "Worker.h"

class Boss : public Worker
{
   public:
	//构造函数
	Boss(int id, std::string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual std::string getDeptName();
};
#endif