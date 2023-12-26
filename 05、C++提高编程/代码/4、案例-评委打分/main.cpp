#include <algorithm>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <ctime>

using namespace std;

class Person
{
   public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;	//姓名
	int m_Score;	//平均分
};

void print(vector<Person> &v)
{
	for (vector<Person>::iterator dit = v.begin(); dit != v.end(); dit++) {
		cout << "选手：" << (*dit).m_Name << "\t打分：" << (*dit).m_Score << endl;
	}
}

void createPerson(vector<Person> &v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的person对象 放入到容器中
		v.push_back(p);
	}
}

// 打分
void setScore(vector<Person> &v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		//将评委的分数 放入到deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;  // 60 ~ 100
			d.push_back(score);
		}
#if 0
		cout << "选手： " << it->m_Name << " 打分： " << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " ";
		}
		cout << endl;

#endif
		//排序
		sort(d.begin(), d.end());

		//去除最高和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;  //累加每个评委的分数
		}

		int avg = sum / d.size();

		//将平均分 赋值给选手身上
		it->m_Score = avg;
	}
}

int main(int argc, char const *argv[])
{
	//随机数种子
	srand((unsigned int)time(NULL));

	// 1、创建5名选手
	vector<Person> v;  //存放选手容器
	createPerson(v);
	// print(v);

	// 2、给5名选手打分
	setScore(v);

	// 3、显示最后得分
	print(v);

	return 0;
}
