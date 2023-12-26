#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int> v1;	 //无参构造

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2(v1.begin(), v1.end());  // 区间方式
	printVector(v2);

	vector<int> v3(10, 100);  // n个elem方式
	printVector(v3);

	vector<int> v4(v2);	 //拷贝构造
	printVector(v4);
}
int main(int argc, char const* argv[])
{
	test01();
    
	return 0;
}
