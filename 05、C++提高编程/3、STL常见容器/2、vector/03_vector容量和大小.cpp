#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// vector容量和大小
void test01()
{
	vector<int> v1;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty()) {
		cout << "v1为空" << endl;
	} else {
		cout << "v1不为空" << endl;
		cout << "v1的容量 = " << v1.capacity() << endl;
		cout << "v1的大小 = " << v1.size() << endl;
	}
	cout << "----------------------------------" << endl;

	// resize 重新指定大小
	v1.resize(20, 20);	// 若指定的更大，默认用 0填充新位置，可以利用重载版本替换默认填充
	cout << "v1的容量 = " << v1.capacity() << endl;
	cout << "v1的大小 = " << v1.size() << endl;
	printVector(v1);

	// resize 重新指定大小
	v1.resize(5);  // 若指定的更小，超出部分元素被删除
	cout << "v1的容量 = " << v1.capacity() << endl;
	cout << "v1的大小 = " << v1.size() << endl;
	printVector(v1);
}

int main(int argc, char const* argv[])
{
	test01();
    
	return 0;
}
