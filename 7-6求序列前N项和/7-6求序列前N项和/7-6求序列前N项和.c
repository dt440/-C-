#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a = 1.0;
	double b = 1.0;
	int N = 0;
	int i = 0;
	double sum = 0;
	scanf("%d", &N);
	for (i; i < N; i++)
	{
		sum += a / b;
		a += 1;
		b += 2;
	}
	printf("%.2f", sum);
	return 0;
}