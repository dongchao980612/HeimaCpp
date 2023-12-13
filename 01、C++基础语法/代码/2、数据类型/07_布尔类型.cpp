#include <iostream>

using namespace std;

int main()
{
	bool flag = true;
	cout << flag << endl;  // 1

	flag = false;
	cout << flag << endl;  // 0

	cout << "size of bool = " << sizeof(bool) << endl;	// 1

	return 0;
}
