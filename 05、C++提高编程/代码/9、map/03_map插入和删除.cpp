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

// map 插入与删除
void test01()
{
	//插入
	map<int, int> m;

	//第一种插入方式
	m.insert(pair<int, int>(1, 10));

	//第二种插入方式
	m.insert(make_pair(2, 20));

	//第三种插入方式
	m.insert(map<int, int>::value_type(3, 30));

	//第四种插入方式
	m[4] = 40;
	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//清空
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
