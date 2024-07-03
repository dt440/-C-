#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a, b,sum,s;
	s = 0;
	for (a = 11; a != 0; a--)
	{
		sum = 1;
		for (b = 1; b!=a; b++)
		{
			
			sum *= b;
		}
		s += sum;
	}
	printf("%d ", s-1);
	return 0;
}