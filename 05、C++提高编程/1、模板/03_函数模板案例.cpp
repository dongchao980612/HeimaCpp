#include <iostream>

using namespace std;

//交换的函数模板
template <typename T> void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//利用选择排序，进行对数组从大到小的排序
template <class T> void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++) {
		int max = i;  //最大数的下标
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j]) {
				max = j;
			}
		}
		if (max != i)  //如果最大数的下标不是i，交换两者
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template <typename T> void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	//测试char数组
	char charArr[] = "fadcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02()
{
	//测试int数组
	int intArr[] = {7, 5, 8, 1, 3, 9, 2, 4, 6};
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main(int argc, char const *argv[])
{
	test01();
	test02();
	return 0;
}
