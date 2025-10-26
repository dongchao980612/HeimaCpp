#include <algorithm>
#include <ctime>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

class myPrint
{
   public:
	void operator()(int val) { cout << val << " "; }
};

void test01()
{
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;

	//打乱顺序
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint());
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
