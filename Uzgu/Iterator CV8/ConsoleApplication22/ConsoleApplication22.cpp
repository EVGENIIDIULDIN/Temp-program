

#include "pch.h"
#include <iostream>
# include < string>

using namespace std;

int main()
{
	int b = 8;
	//int * a = &b;
	int * a;
	a = &b; // Работаем с переменной 
	*a = 23; // Работаем с значением
	cout << a << endl << b;

}

