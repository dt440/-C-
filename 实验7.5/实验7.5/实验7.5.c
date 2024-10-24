#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请输入行数和符号：");
	int x = 0;
	char c;
	scanf("%d,%c", &x, &c);
	int i = 1;
	int l = 1;
	for (i = 1; i <= x; i++)
	{
		int k = i;
		while (k < x)
		{
			printf(" ");
			k++;
		}		
		for (l = 1; l <=2*i-1; l++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	for (i = x; i >= 1; i--)
	{
		int k = i-1;
		while (k < x)
		{
			printf(" ");
			k++;
		}
		for (l = 1; l <= 2 * (i-1) - 1; l++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}