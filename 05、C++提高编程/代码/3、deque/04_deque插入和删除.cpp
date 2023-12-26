#include <iostream>
#include <deque>

using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// deque两端操作
void test01()
{
	deque<int> d;

	//尾插
	d.push_back(10);
	d.push_back(20);

	//头插
	d.push_front(100);
	d.push_front(200);
	printDeque(d);	// 200 100 10 20

	//尾删
	d.pop_back();

	//头删
	d.pop_front();
	printDeque(d);	// 100 10
}

// deque插入
void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);	// 200 100 10 20

	d.insert(d.begin(), 1000);
	printDeque(d);	// 1000 200 100 10 20

	d.insert(d.begin(), 2, 10000);	// 10000 10000 1000 200 100 10 20
	printDeque(d);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d.insert(d.begin(), d2.begin(), d2.end());	// 1 2 3 10000 10000 1000 200 100 10 20
	printDeque(d);
}

// deque删除
void test03()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());
	printDeque(d);

	d.erase(d.begin(), d.end());
	d.clear();
	printDeque(d);
}

int main(int argc, char const* argv[])
{
	// test01();
	// test02();
	test03();
	return 0;
}
