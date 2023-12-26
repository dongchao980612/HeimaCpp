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

// vector赋值操作
void test01()
{
	vector<int> v1;	 //无参构造
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int> v2;
	v2 = v1;  // = 赋值
	printVector(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());  // assign 赋值 
	printVector(v3);

	vector<int> v4;
	v4.assign(10, 100); // n个elem方式
	printVector(v4);
}

int main(int argc, char const* argv[])
{
	test01();
    
	return 0;
}
