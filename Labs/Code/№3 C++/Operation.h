#pragma once
#include "Shape.h"
#include "Line.h"
#include "Point.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

class Operation
{
public:
	void Compare(Shape* s1, Shape* s2) const;//��������� �� �������
	void IsInclude(Shape* s1, Shape* s2) const;//��������� ����� �� ����� ������
	void IsIntersect(Shape* s1, Shape* s2) const;//����������� ���� �����
	Operation(void);
	~Operation(void);
};

