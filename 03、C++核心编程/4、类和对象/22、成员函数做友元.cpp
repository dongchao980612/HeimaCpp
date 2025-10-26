#include <iostream>
#include <string>

using namespace std;

class Building;

class Building
{
		//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
	friend void goodGay::visit();

   public:
	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}

   public:
	string m_SittingRoom;  //客厅
   private:
	string m_BedRoom;  //卧室
};

class goodGay
{
   public:
	goodGay() { building = new Building; }
	void visit()
	{
		cout << "好基友正在访问" << building->m_SittingRoom << endl;
		cout << "好基友正在访问" << building->m_BedRoom << endl;
	}

	void visit1()
	{
		cout << "好基友正在访问" << building->m_SittingRoom << endl;
		cout << "好基友正在访问" << building->m_BedRoom << endl;
	}

   private:
	Building *building;
};

void test01()
{
	goodGay gg;
	gg.visit();
}

int main(int argc, char const *argv[])
{
	test01();

	return 0;
}
