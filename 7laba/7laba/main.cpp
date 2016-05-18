#include "Multi.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	Multi obj(n);
	obj.Input();
	obj.Print();
	system("pause");
	return 0;
}