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

class MyCompare
{
   public:
	bool operator()(const int v1, const int v2) const { return v1 > v2; }
};

// 容器排序
void test01()
{
	map<int, int, MyCompare> m;

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
}

int main(int argc, char const *argv[])
{
	test01();
	return 0;
}
