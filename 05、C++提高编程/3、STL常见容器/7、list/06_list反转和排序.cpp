#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	// 降序 第一个数 > 第二个数
	return val1 > val2;
}

// list 反转与排序
void test01()
{
	list<int> L;
	L.push_back(20);
	L.push_back(10);
	L.push_back(50);
	L.push_back(40);
	L.push_back(30);

	cout << "反转前：" << endl;
	printList(L);

	//反转容器的元素
	L.reverse();
	cout << "反转后：" << endl;
	printList(L);

	//排序
	// sort(L.begin(),L.end()); // 不支持随机存储，内部提供成员函数
	L.sort();  //默认的排序规则 从小到大
	printList(L);

	L.sort(myCompare);	//指定规则，从大到小
	printList(L);
}

int main(int argc, char const* argv[])
{
	test01();
	return 0;
}
