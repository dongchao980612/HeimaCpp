#include <iostream>

using namespace std;

int main()
{
    // 整型 short(2) int(4) long(8) long long(8) 
	
	cout << "short 类型所占内存空间为： " << sizeof(short) << endl;

	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;

	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;

	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

	return 0;
}