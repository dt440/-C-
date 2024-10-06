#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int k = 0;
	for (i = 1; i < 10; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf("%d*%d=%-2d ", i, k, i * k);
		}
		printf("\n");
	}
	return 0;
}