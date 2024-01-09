#include <iostream>
#include <set>

using namespace std;

// set和multiset区别
void test01()
{
	// set
	set<int> s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second) {
		cout << "第一次插入成功!" << endl;
	} else {
		cout << "第一次插入失败!" << endl;
	}

	ret = s.insert(10);
	if (ret.second) {
		cout << "第二次插入成功!" << endl;
	} else {
		cout << "第二次插入失败!" << endl;
	}

	// multiset
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
