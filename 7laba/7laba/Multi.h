#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Multi
{
public:
	double *arr;
	int n;

public:
	Multi();
	Multi(int);
	Multi(double);
	int Value();
	friend ostream& operator<<(ostream&,int);
	void Print();
	void Input();
	~Multi();
};

