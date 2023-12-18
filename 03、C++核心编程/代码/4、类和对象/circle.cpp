#include "circle.h"

void Circle::setR(int R) { this->m_R = R; }
int Circle::getR() { return this->m_R; }

void Circle::setCenter(Point center) { this->m_Center = center; }
Point Circle::getCenter() { return this->m_Center; }