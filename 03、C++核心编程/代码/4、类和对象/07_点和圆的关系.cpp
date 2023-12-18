#include <cmath>
#include <iostream>
#include <string>

#include "circle.h"
#include "point.h"

using namespace std;

// 判断点和圆的关系
void isInCircle(Circle &c, Point &p)
{
	// 计算两点之间距离的平方
	int distance = pow(c.getCenter().getX() - p.getX(), 2) + pow(c.getCenter().getY() - p.getY(), 2);

	int cDistance = pow(c.getR(), 2);

	// 判断
	if (distance == cDistance) {
		cout << "点在圆上" << endl;
	} else if (distance > cDistance) {
		cout << "点在圆外" << endl;
	} else {
		cout << "点在圆内" << endl;
	}
}

// 设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。

int main(int argc, char const *argv[])
{
	// 创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	// 创建点
	Point p;
	p.setX(10);
	p.setY(11);

	//判断关系；
	isInCircle(c, p);

	return 0;
}
