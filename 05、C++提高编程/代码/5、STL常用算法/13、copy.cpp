#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class myPrint
{
   public:
	void operator()(int val) { cout << val << " "; }
};

//常用遍历算法  搬运 transform
class TransForm
{
   public:
	int operator()(int val) { return val; }
};

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i + 1);
	}
	vector<int> v2;
	v2.resize(v1.size()); //开辟空间

	copy(v1.begin(), v1.end(), v2.begin());
    //transform(v1.begin(), v1.end(), v2.begin(), TransForm());

	for_each(v2.begin(), v2.end(), myPrint());
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
