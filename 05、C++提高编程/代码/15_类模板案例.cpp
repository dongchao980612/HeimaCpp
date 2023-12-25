#include <iostream>

#include "myArray.hpp"

using namespace std;

// 测试自定义数据类型
class Person
{
   public:
	Person() {}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

   public:
	string m_Name = "";
	int m_Age = 0;
};

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printPersonArray(MyArray<Person>& personArr)
{
	for (int i = 0; i < personArr.getSize(); i++) {
		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
	}
}

//测试内置数据类型
static void test01()
{
	MyArray<int> array1(10);

	// 测试拷贝构造
	MyArray<int> array2(array1);

	// 测试拷贝构造
	MyArray<int> array3(100);

	// 测试operator= 函数
	array3 = array1;

	cout << "array1的大小：" << array1.getSize() << endl;
	cout << "array1的容量：" << array1.getCapacity() << endl;
}

static void test02()
{
	// 测试尾插
	MyArray<int> array1(5);
	for (int i = 0; i < array1.getCapacity(); i++) {
		array1.Push_back(i);
	}
	cout << "array1的大小：" << array1.getSize() << endl;
	cout << "array1的容量：" << array1.getCapacity() << endl;
	printIntArray(array1);

	// 测试尾删
	MyArray<int> array2(array1);
	for (int i = 0; i < array2.getCapacity(); i++) {
		array2.Pop_back();
	}
	cout << "array2的大小：" << array2.getSize() << endl;
	cout << "array2的容量：" << array2.getCapacity() << endl;
	printIntArray(array2);
}
static void test03()
{
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	MyArray<Person> pArray(10);

	//插入数据
	pArray.Push_back(p1);
	pArray.Push_back(p2);
	pArray.Push_back(p3);
	pArray.Push_back(p4);
	pArray.Push_back(p5);

	printPersonArray(pArray);

	cout << "array1的大小：" << pArray.getSize() << endl;
	cout << "array1的容量：" << pArray.getCapacity() << endl;
}
int main(int argc, char const* argv[])
{
	// test01();
	// test02();
	test03();
	return 0;
}
