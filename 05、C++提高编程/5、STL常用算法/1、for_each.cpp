#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 普通函数
void print01(int val) { cout << val << " "; }

// 函数对象
class print02
{
   public:
	void operator()(int val) { cout << val << " "; }
};

// for_each算法基本用法
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	//遍历算法
	for_each(v.begin(), v.end(), print01);
	cout << endl;

	for_each(v.begin(), v.end(), print02());
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
