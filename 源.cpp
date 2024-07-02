#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a=0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("a为奇数");
	else
		printf("a为偶数");

	return 0;
}