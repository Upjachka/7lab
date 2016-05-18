#include "Multi.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


Multi::Multi()
{

}
Multi::Multi(int n)
{
	this->n = n;
	arr = new double[n];
}
Multi::Multi(double zn)
{
	double *tmp = new double[n];
	for (int i = 0; i < n; i++)
	{
		tmp[i] = arr[i];
	}
	delete[] arr;
	arr = new double[n+1];
	for (int i = 0; i < n; i++)
	{
		arr[i] = tmp[i];
	}
	arr[n+1] = zn;
	n++;
	delete[] tmp;

}
int Multi::Value()
{
	return n;
}
void Multi::Input()
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
void Multi::Print()
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "|";
	}
}
Multi::~Multi()
{
}
