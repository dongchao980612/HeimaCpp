#include <iostream>
#include <string>

using namespace std;

class C1
{
	int m_A;  //默认是私有权限
};

struct C2 {
	int m_A;  //默认是公共权限
};
int main(int argc, char const *argv[])
{
	// 在C++中 struct和class唯一的区别就在于默认的访问权限不同
	// - struct 默认权限为公共
	// - class   默认权限为私有

	C1 c1;
	// c1.m_A = 10;  //错误，访问权限是私有

	C2 c2;
	c2.m_A = 10;  //正确，访问权限是公共

	return 0;
}
