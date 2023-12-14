#include <iostream>

using namespace std;

// 1、new的基本语法
int* func()
{
	// 在堆区创建整型数据
	// new返回的该书数据的指针
	int* a = new int(10);
	return a;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//由程序员开辟与释放

	delete p;
	cout << *p << endl;	 // 内存已经释放，再次访问就是非法操作，会报错
}
// 2、在堆区利用new开辟数组
void test02()
{
	// 创建1个整型数据的数组，在堆区
	int* arr = new int[10];
	for (size_t i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}

	for (size_t i = 0; i < 10; i++) {
		cout << arr[i] << "\t";
	}

    delete[] arr; // 释放数组 要加[]才可以

}
int main()
{
	test01();
	test02();

	return 0;
}