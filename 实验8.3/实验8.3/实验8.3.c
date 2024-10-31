#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	int count = 0;//¼ÆÊýÆ÷
	for (i = 1; i <= 1000; i++)
	{
		if ((i % 5 != 0) || (i % 7 != 0))
		{
			continue;
		}
		printf("%d ", i);
		count++;
		if (count == 6)
		{
			printf("\n");
			count = 0;
		}
	}

	return 0;
}