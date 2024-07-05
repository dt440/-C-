#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int k = 2;
		for (k = 2;k<i; k++)
		{
			if (i % k == 0)
				break;
		}
		if (k == i)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}