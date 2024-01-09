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

// map 大小
void test01()
{
	map<int, int> m;  //默认构造
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	printMap(m);

	if (m.empty()) {
		cout << "m为空" << endl;
	} else {
		cout << "m不为空" << endl;
		cout << "m的大小为： " << m.size() << endl;
	}
}

// map 交换
void test02()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	map<int, int> m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));

	cout << "交换前" << endl;
	printMap(m);
	printMap(m2);

	cout << "交换后" << endl;
	m.swap(m2);
	printMap(m);
	printMap(m2);
}

int main(int argc, char const *argv[])
{
	test01();
	test02();
	return 0;
}
