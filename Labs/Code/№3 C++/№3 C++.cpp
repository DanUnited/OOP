#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Operation.h"
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "FactoryShape.h"
using namespace std;

int main()
{
	Shape *shape1, *shape2;//�������� 2� ���������� �� ������� �����
	FactoryShape f;//�������� ������� �����
	Operation oper;//�������� ���������� ������ ��� �������� ��� ��������
	shape1 = f.Choice();//����� 1� ������
	shape2 = f.Choice();//����� 2� ������
	oper.Compare(shape1, shape2);//���������� �������� ���������
	oper.IsIntersect(shape2, shape1);//�������� ����������� �����
	oper.IsInclude(shape2, shape1);//�������� ��������� ����� ���� � �����
	return 0;
}