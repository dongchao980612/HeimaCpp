#include <iostream>

using namespace std;

// 抽象类
class Base
{
   public:
	//纯 虚函数
	// 类中只要有一个纯虚函数就称为 抽象类
	// 抽象类无法实例化对象
	// 子类必须重写父类中的纯虚函数，否则也属于抽象类
	virtual void func() = 0;
};

class Son : public Base
{
   public:
	//  子类必须重写纯虚函数
	void func() { cout << "func调用" << endl; };
};

void test01()
{
	// 错误，抽象类无法实例化对象
	// Base b;
	// Base *base =  new Base;

	Base *base = new Son;
	base->func();
	delete base;  //记得销毁

}

int main(int argc, char const *argv[])
{
	test01();

	return 0;
}