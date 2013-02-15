#include "Point.h"
#include <algorithm>

#pragma once
class Line
{
private:
	Point A;
	Point B;
	double Get_k();//��������� ���������������� ������������ ��������� ������ y=kx+b
	double Get_b();//��������� ���������������� ������������ ��������� ������ y=kx+b
public:
	double GetLength();//��������� ����� �������
	Point GetCentralPoint();//��������� ����� ������ �������
	Point GetCrossoverPoint(Line line);//��������� ����� ����������� ��� 2� ��������
	Line(Point A_, Point B_);
	~Line(void);
};

