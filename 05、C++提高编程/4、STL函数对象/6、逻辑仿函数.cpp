#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";	 // 1 1 0 0
	}
	cout << endl;

	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算
	vector<bool> v2;
	v2.resize(v.size());

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++) {
		cout << *it << " ";	 // 0 0 1 1
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();

	return 0;
}