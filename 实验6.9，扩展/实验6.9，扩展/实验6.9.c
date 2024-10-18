#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a = 1.0;
	double sum = 0;
	int k = 1;
	while (a < 51)
	{
		sum += k*(1.0 / a);
		a++;
		k *= -1;
	}
	printf("%lf", sum);
	return 0;
}