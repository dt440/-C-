#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d,%d", &a, &b);
	if (a < 0 )
	{
		a = a * -1;
	}
	if (b < 0)
	{
		b = b * -1;
	}
	if (a >= b)
	{
		printf("%d%d", a, b);
	}
	else
	{
		printf("%d%d", b, a);
	}
	return 0;
}