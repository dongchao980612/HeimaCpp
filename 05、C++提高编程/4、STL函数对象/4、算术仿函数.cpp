#include <functional>
#include <iostream>

using namespace std;

// negate
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}

// plus
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

int main(int argc, char const *argv[])
{
	test01();
	test02();
	return 0;
}
