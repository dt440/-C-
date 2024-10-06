#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a;
	int i = 1;
	scanf("%d", &a);
do
{
	a = a / 10;
		i++;
} while (a / 10 != 0);
	printf("%d", i);
	return 0;
}