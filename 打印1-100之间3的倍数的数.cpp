#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int n;
	for (n = 1;n<=100;n++)
	{
		if (n % 3 == 0)
			printf("%d ", n);
	}

	return 0;
}