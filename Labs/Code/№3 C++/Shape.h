#include "Point.h"

#pragma once
class Shape
{
protected:
	Point* arc;
public:
	char id;

	virtual double GetArea() = 0;//���������� �������
	virtual Point GetCenterOfGravity() = 0;//���������� ������ �������
	virtual double GetInscribedRadius() = 0;//���������� ��������� ����������
	virtual double GetCircumscribedRadius() = 0;//���������� ��������� ����������

	Shape(void);
	virtual ~Shape(void);
};

