#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

//常用遍历算法  搬运 transform
class TransForm
{
   public:
	int operator()(int val) { return val + 1; }
};

class MyPrint
{
   public:
	void operator()(int val) { cout << val << " "; }
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> vTarget;  //目标容器

	vTarget.resize(v.size());  // 目标容器需要提前开辟空间

	for_each(v.begin(), v.end(), MyPrint());
	cout<<endl;
	transform(v.begin(), v.end(), vTarget.begin(), TransForm());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main()
{
	test01();

	return 0;
}