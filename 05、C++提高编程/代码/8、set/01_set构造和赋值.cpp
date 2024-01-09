#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> &s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// set 构造和赋值
void test01()
{
	set<int> s1;

	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	// 自动被排序，不允许重复
	printSet(s1);

	//拷贝构造
	set<int> s2(s1);
	printSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	printSet(s3);
}
int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
