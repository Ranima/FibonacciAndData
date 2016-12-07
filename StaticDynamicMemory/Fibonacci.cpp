#include "Fibonacci.h"
#include <cstdio>

void Fib::fibEval(int N)
{
	N = N - 1;
	int X = 0;
	int A = 0;
	int B = 1;
	int C;
	while (X <= N)
	{
		C = B;
		B = A + B;
		FibSeq[X] = B;
		A = C;
		X++;
	}
	printf_s("%d \n", FibSeq[N]);
}
