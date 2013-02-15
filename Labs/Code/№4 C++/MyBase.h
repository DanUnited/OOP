#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Student.h"

using namespace std;

#pragma once
class MyBase
{
private:
	vector<Student> students;
public:
	void Sort();//���������� �� ������ ������
	void In(int n, istream& in);//���� ������ � ���������� ������
	void InFile(int n = -1, string path = "BaseIn.txt");//���� ������ � ���������� �����
	void Out();//����� �� ����� � � ���� ���������, ������� ���� ������� ������ 4
	void Out(ostream& out);//����� ������ ��������� � ��������� �����
	void OutFile(string path = "BaseOut.txt");//����� ������ ��������� � ��������� ����
	MyBase(void);
	~MyBase(void);
};

