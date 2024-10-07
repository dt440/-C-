#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a, b, y;
	printf("enter a,b:");
	scanf("%d %d",&a,&b);
	if ((a * a + b * b) > 100)
	{
		y = (a * a + b * b) / 100;
	}
	else
	{
		y = a + b;
	}
	printf("y = %d\n", y);
	return 0;
}