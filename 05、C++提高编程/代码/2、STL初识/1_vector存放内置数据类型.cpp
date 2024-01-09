#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void MyPrint(int val) { cout << val << " "; }

void test01()
{
	//创建vector容器对象，并且通过模板参数指定容器中存放的数据的类型
	vector<int> v;

	//向容器中放数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
	vector<int>::iterator pBegin = v.begin();  // 这个迭代器指向容器中第一个数据
	vector<int>::iterator pEnd = v.end();	   // 这个迭代器指向容器元素的最后一个元素的下一个位置

	//第一种遍历方式：
	while (pBegin != pEnd) {
		cout << *pBegin << " ";
		pBegin++;
	}
	cout << endl;

	//第二种遍历方式：
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//第三种遍历方式：
	//使用STL提供标准遍历算法  头文件 algorithm
	for_each(v.begin(), v.end(), MyPrint);
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
