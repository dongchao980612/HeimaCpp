#include <iostream>

using namespace std;

//多态满足条件：
// 1、有继承关系
// 2、子类重写父类中的虚函数
//多态使用：
// 父类指针或引用指向子类对象

class Animal
{
   public:
	// Speak函数就是虚函数
	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
	virtual void speak() { cout << "动物在说话" << endl; }
};

class Cat : public Animal
{
   public:
	void speak() { cout << "小猫在说话" << endl; }
};

class Dog : public Animal
{
   public:
	void speak() { cout << "小狗在说话" << endl; }
};

// Animal &animal = cat
//  地址早绑定 在编译阶段就能确定
//  地址晚绑定 在运行阶段就能确定
void DoSpeak(Animal &animal) { animal.speak(); }

void test01()
{
	Cat cat;
	DoSpeak(cat);

	Dog dog;
	DoSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;  // 4 字节的指针
}
int main(int argc, char const *argv[])
{
	// test01();
	test02();
	return 0;
}
