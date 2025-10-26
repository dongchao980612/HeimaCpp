#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

void myPrint(int val) { cout << val << " "; }

void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	// sort默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//从大到小排序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
