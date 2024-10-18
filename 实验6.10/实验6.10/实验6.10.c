#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("输入一个整数：");
	scanf("%d", &N);
	int a = 0;
	int b = 0;
	printf("请输入%d个数", N);
	while (N > 0)
	{
		scanf("%d", &a);
		if (a > b)
		{
			b = a;
		}
		N--;
	}
	printf("最大的数为：%d", b);
	return 0;
}