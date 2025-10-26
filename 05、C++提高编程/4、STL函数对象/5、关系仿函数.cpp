#include <functional>
#include <iostream>
#include <vector>

using namespace std;

class MyCompare
{
   public:
	bool operator()(int v1, int v2) { return v1 > v2; }
};

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// 自己实现仿函数
	// sort(v.begin(), v.end(), MyCompare());
	// STL内建仿函数  大于仿函数
	sort(v.begin(), v.end(), greater<int>());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
