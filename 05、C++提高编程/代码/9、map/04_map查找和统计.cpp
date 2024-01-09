#include <iostream>
#include <map>

using namespace std;

void printMap(map<int, int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << it->first << " value = " << it->second << "\t";
	}
	cout << endl;
}

// 查找与统计
void test01()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	//查找
	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end()) {
		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
	} else {
		cout << "未找到元素" << endl;
	}

	//统计
	int num = m.count(3);
	cout << "num = " << num << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
