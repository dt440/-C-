#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a = 1.0;
	double sum = 0;
	while (a < 51)
	{
		sum += (1.0 / a);
		a++;
	}
	printf("%lf", sum);
	return 0;
}