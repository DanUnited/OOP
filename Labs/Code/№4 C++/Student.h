#include <string>
#include <iostream>
#include <cctype>
#include "Progress.h"

using namespace std;

#pragma once
class Student
{
private:
	string _patronymic;
	string _name;
	string _lastName;
	string _NumberOfGroup;
	Progress _progress;
	void Check();//�������� �������� ��������� ������
public:
	double AverageMark();//���������� �������� ����� ��������
	Student(void);
	~Student(void);
	bool operator<(Student student);
	friend istream& operator>>(istream &cin, Student &student);//��������� ����
	friend ostream& operator<<(ostream &cout, Student &student);//��������� �����
};

