#include <iostream>

using namespace std;

void func(int& ref) { ref = 100; }
int main(int argc, char const* argv[])
{
	int a = 100;
	int& ref = a;  // int* const ref = &a;

	ref = 20;  // *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func(a);

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;
    
	return 0;
}
