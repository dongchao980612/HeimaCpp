#include <iostream>

using namespace std;

class Base1
{
   public:
	int m_A;

   protected:
	int m_B;

   private:
	int m_C;
};

//公共继承
class Son1 : public Base1
{
   public:
	void func()
	{
		m_A = 100;	//可访问 public权限
		m_B = 100;	//可访问 protected权限
					// m_C = 100; //不可访问
	}
};

void myClass()
{
	Son1 s1;
	s1.m_A;	 // 其他类只能访问到公共权限
			 // s1.m_B;  // 不可访问
}

//保护继承
class Base2
{
   public:
	int m_A;

   protected:
	int m_B;

   private:
	int m_C;
};

class Son2 : protected Base2
{
   public:
	void func()
	{
		m_A = 100;	//可访问 protected权限
		m_B = 100;	//可访问 protected权限
					// m_C = 100; //不可访问
	}
};

void myClass2()
{
	Son2 s;
	// s.m_A; //不可访问
}

//私有继承
class Base3
{
   public:
	int m_A;

   protected:
	int m_B;

   private:
	int m_C;
};

class Son3 : private Base3
{
   public:
	void func()
	{
		m_A = 100;	//可访问 private权限
		m_B = 100;	//可访问 private权限
					// m_C = 100; //不可访问
	}
};
class GrandSon3 :public Son3
{
public:
	void func()
	{
		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
		// m_A;
		// m_B;
		// m_C;
	}
};

void myClass3()
{
	Son3 s;
	// s.m_A; //不可访问
}

int main(int argc, char const *argv[])
{
	myClass();
	myClass2();
	myClass3();

	return 0;
}
