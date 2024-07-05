#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a, b, u;
	scanf("%d%d", &a, &b);
	int i = 0;

	for (i = 1; i <= a && i <= b; i++)
	{		
		if (a % i == 0 && b % i == 0)
		{
			u = i;
		}
}
	printf("%d",u );
	return 0;
}