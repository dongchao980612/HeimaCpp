#include <iostream>

using namespace std;

// 1、new的基本语法
int* func()
{
	// 在堆区创建整型数据
	// new返回的该数据的指针
	int* a = new int(10);
	return a;
}

void test01()
{
	int* p = func();
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;
	cout << "p = " << *p << endl;
	//由程序员开辟与释放

	delete p;
	p = NULL;
}
// 2、在堆区利用new开辟数组
void test02()
{
	// 创建1个整型数据的数组，在堆区
	const int arr_size = 5;
	int* arr = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
		arr[i] = i + 100;
	}

	for (int i = 0; i < arr_size; i++) {
		cout << arr[i] << "\t";
	}

	delete[] arr; // 释放数组 要加[]才可以
	arr = NULL;

}
int main()
{
	test01();
	test02();

	return 0;
}
