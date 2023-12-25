#include <iostream>
#include <string>

using namespace std;

class Animal
{
   public:
	Animal() { cout << "Animal 的构造函数" << endl; }

	// 虚析构函数
	// virtual ~Animal() { cout << "Animal的析构函数" << endl; }

	// 纯虚析构函数
	virtual ~Animal() = 0;

	virtual void speak() = 0;
};

Animal::~Animal() { cout << "Animal 的纯虚析构函数" << endl; }

class Cat : public Animal
{
   public:
	Cat(string name)
	{
		cout << "Cat 的构造函数" << endl;
		this->m_Name = new string(name);
	}

	~Cat()
	{
		if (m_Name != nullptr) {
			cout << "Cat 的析构函数" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	void speak() { cout << *m_Name << "在说话" << endl; }

	string* m_Name;
};
/*
Animal的构造函数
Cat的构造函数
Tom在说话
Animal的析构函数
*/
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
	delete animal;
}
int main(int argc, char const* argv[])
{
	test01();
	return 0;
}
