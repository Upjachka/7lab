#include "Multi.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		Multi obj(n);
		obj.Input();
	}
	obj.Print();
	system("pause");
	return 0;
}