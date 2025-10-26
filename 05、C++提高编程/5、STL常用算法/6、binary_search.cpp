#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
    
	//二分查找
	bool ret = binary_search(v.begin(), v.end(), 2);
	if (ret) {
		cout << "找到了" << endl;
	} else {
		cout << "未找到" << endl;
	}
}

int main(int argc, char const* argv[])
{
	test01();
	return 0;
}