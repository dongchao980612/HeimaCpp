#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle
{
   private:
	int m_R;  // 半径

	Point m_Center;	 // 在类中可以让定义另一个类作为类中的成员

   public:
	void setR(int R) ;
	int getR() ;

	void setCenter(Point center);
	Point getCenter() ;
};


#endif   //  CIRCLE_H
