#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int P = 1;
	int i = 1;
	while (i < 6)
	{
		P *= i;
		i++;
	}
	printf("%d", P);
	return 0;
}
