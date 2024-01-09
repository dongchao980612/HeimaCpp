#include <iostream>
#include <stack>

using namespace std;

// stack 容器常用接口
void test01()
{
	//创建栈容器 栈容器必须符合先进后出
	stack<int> s;

	//向栈中添加元素，叫做 压栈 入栈
	s.push(10);
	s.push(20);
	s.push(30);
	cout << "栈的大小为：" << s.size() << endl;

	while (!s.empty()) {
		//输出栈顶元素
		cout << "栈顶元素为： " << s.top() << endl;

		//弹出栈顶元素
		s.pop();
	}
	cout << "栈的大小为：" << s.size() << endl;
}
int main(int argc, char const *argv[])
{
	test01();

	return 0;
}
