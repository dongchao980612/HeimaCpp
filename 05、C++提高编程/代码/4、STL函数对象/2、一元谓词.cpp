#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 1.一元谓词
class GreaterFive
{
   public:
	bool operator()(int val) { return val > 5; }
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "没找到!" << endl;
	} else {
		cout << "找到:" << *it << endl;
	}
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
