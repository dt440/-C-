#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{

	int a, b, c, s;
	printf("Enter number 1:");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("Invalid number!\n");
		goto L;
	}
	printf("Enter number 2:");
	scanf("%d", &b);
	if (b == 0)
	{
		printf("Invalid number!\n");
		goto L;
	}
	printf("Enter number 3:");
	scanf("%d", &c);
	if (c == 0)
	{
		printf("Invalid number!\n");
		goto L;
	}
	if (a % 2 == 0)
	{
		s = b - c;
	}
	else if (a % 2 != 0)
	{
		s = b + c;
	}
	if (s > 10)
	{
		printf("Result:%d", s);
	}
    L:
	return 0;
}