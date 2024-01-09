#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
   public:
	string m_Name;
	int m_Salary;
};

void printVector(vector<Worker> &v)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		cout << (*it).m_Name << "\t" << (*it).m_Salary << endl;
	}
	cout << endl;
}

void printMap(multimap<int, Worker> &m)
{
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << it->first << " value = " << it->second.m_Name << "\t" << it->second.m_Salary << endl;
	}
	cout << endl;
}

// 创建员工
void createWorker(vector<Worker> &v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;  // 10000 ~ 19999
		//将员工放入到容器中
		v.push_back(worker);
	}
}

// 员工分组
void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		//产生随机部门编号
		int deptId = rand() % 3;  // 0 1 2

		//将员工插入到分组中
		// key部门编号，value具体员工
		m.insert(make_pair(deptId, *it));
	}
}

// 分组显示员工
void showWorkerByGourp(multimap<int, Worker> &m)
{
	// 0  A  B  C   1  D  E   2  F G ...
	cout << "策划部门：" << endl;

	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);	 // 统计具体人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "美术部门： " << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);  // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "研发部门： " << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);	 // 统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
	}
}

int main(int argc, char const *argv[])
{
	srand((unsigned int)time(NULL));

	// 1、创建员工
	vector<Worker> vWorker;
	createWorker(vWorker);
	// printVector(vWorker);

	// 2、员工分组
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);
	// printMap(mWorker);

	// 3、分组显示员工
	showWorkerByGourp(mWorker);

	return 0;
}
