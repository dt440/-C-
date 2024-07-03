#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int n,k;
	k = 1;
	scanf("%d", &n);
	for (; n != 0; n--)
	{
		 k = k * n;
	}
	printf("%d ", k);
	return 0;
}