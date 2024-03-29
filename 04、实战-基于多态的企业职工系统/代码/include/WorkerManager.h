#ifndef WORKERMANAGER_H_
#define WORKERMANAGER_H_

#include <fstream>
#include <iostream>

#include "Boss.h"
#include "Employee.h"
#include "Manager.h"
#include "Worker.h"

constexpr auto FILENAME = "empFile.txt";

using namespace std;

class WorkerManager
{
   public:
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//添加职工
	void Add_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工是否存在  如果存在返回职工所在数组中的位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//按照编号排序
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//析构函数
	~WorkerManager();

	int m_EmpNum;  //记录职工人数

	Worker** m_EmpArray;  //职工数组指针

	bool m_FileIsEmpty;	 //判断文件是否为空 标志
   private:
	//保存文件
	void save() const;

	//统计文件中人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();
};
#endif
