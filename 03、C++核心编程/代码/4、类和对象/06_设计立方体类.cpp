#include <iostream>
#include <string>

using namespace std;

/*
设计立方体类(Cube)
	1、求出立方体的面积和体积。
	2、分别用全局函数和成员函数判断两个立方体是否相等。
*/

class Cube
{
   private:
	int m_L;  // 长
	int m_W;  //宽
	int m_H;  //高

   public:
	void setL(int L) { this->m_L = L; }
	int getL() { return this->m_L; }

	void setW(int W) { this->m_W = W; }
	int getW() { return this->m_W; }

	void setH(int H) { this->m_H = H; }
	int getH() { return this->m_H; }

	// 获取表面积
	int calculateS() { return 2 * (this->m_L * this->m_W + this->m_W * this->m_H + this->m_H * this->m_L); }

	// 获取体积
	int calculateV() { return this->m_L * this->m_W * this->m_H; }

	// 成员函数判断两个立方体是否相等。
	bool isSameByClass(Cube &c)
	{
		cout << __FUNCTION__ << ":" << endl;
		if (this->m_L == c.getL() && this->m_W == c.getW() && this->m_H == c.getH()) {
			return true;
		} else {
			return false;
		}
	}
};

// 全局函数判断两个立方体是否相等。
bool isSame(Cube &c1, Cube &c2)
{
	cout << __FUNCTION__ << ":" << endl;
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char const *argv[])
{
	Cube c1;

	c1.setL(10);
	c1.setH(10);
	c1.setW(10);

	cout << "c1的面积是：" << c1.calculateS() << endl;	// 600
	cout << "c1的体积是：" << c1.calculateV() << endl;	//  1000

	Cube c2;

	c2.setL(10);
	c2.setH(10);
	c2.setW(10);

	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1、c2相等" << endl;
	} else {
		cout << "c1、c2不相等" << endl;
	}

	ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "c1、c2相等" << endl;
	} else {
		cout << "c1、c2不相等" << endl;
	}

	return 0;
}
