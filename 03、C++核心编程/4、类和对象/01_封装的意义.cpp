#include <iostream>

using namespace std;

// 圆周率
const double PI = 3.14;

// 封装一个圆类，求圆的周长
// class代表设计一个类，后面跟着的是类名

class Circle
{
   public:	// 访问权限  公共的权限
	// 行为
	// 获取到圆的周长
	double calculateZC()
	{
		// 2 * pi  * r
		// 获取圆的周长
		return 2 * PI * this->m_R;
	}

	// 属性
	int m_R;  // 半径
};

int main(int argc, char const *argv[])
{
	// 通过圆类，创建圆的对象
	// c1就是一个具体的圆
	Circle c1;
	c1.m_R = 10;  // 给圆对象的半径 进行赋值操作

	// 2 * pi * 10 = = 62.8
	cout << "圆的周长为： " << c1.calculateZC() << endl;

	return 0;
}