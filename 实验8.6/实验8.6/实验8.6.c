#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 1000; i++)
	{
		if ((i % 3==0) && (i % 5==0) && (i % 7==0))
		{
			printf("%d ", i);
			break;
		}
	}

	return 0;
}