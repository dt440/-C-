#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("请输入一个整数：\n");
	scanf("%d",&N);
	int number = 0;
	if (N < 0)
	{
		N = -N;
	}
	while (N > 0)
	{
		N = N / 10;
		number += 1;
	}
	printf("该数字有%d位数", number);
	return 0;
}