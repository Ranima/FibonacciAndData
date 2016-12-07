#include "Fibonacci.h"
//#include <cstdio>
#include <iostream>

void main()
{
	Fib fibTest;
	int length;
	printf_s("please input the length of the sequnce\n\n");

	std::cin >> length ;

	fibTest.fibEval(length);

	system("pause");
}