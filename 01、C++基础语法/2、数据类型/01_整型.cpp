#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// short(短整型)(-32768~32767)
	short num1 = 32767 + 1;

	// int(整型)
	int num2 = 32767 + 1;

	// long(长整形)
	long num3 = 10;

	// long long(长长整形)
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	return 0;
}