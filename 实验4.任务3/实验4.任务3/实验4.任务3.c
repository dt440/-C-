#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	double x;
	scanf("%lf", &x);
	int m = x;
	double g = x - m;
	printf("%d\n", m);
	if (g == 0)
	{
		printf("û��С������\n");
	}
	else
	{
		printf("%lf\n", g);
	}

	return 0;
}