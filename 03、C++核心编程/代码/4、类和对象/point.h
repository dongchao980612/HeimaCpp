#ifndef POINT_H
#define POINT_H

class Point
{
   private:
	int m_X;
	int m_Y;

   public:
	void setX(int x);
	int getX();

	void setY(int y);
	int getY();
};

#endif // POINT_H