#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;
	int k = 0;//¼ÆÊýÆ÷
	for (i = 1; i < 1001; i++)
	{
		if (i % 5 == 0 && i % 7 == 0)
		{
			printf("%d ", i);
			k++;
			if (k == 6)
			{
				k = 0;
				printf("\n");
			}
		}
	}

	return 0;
}