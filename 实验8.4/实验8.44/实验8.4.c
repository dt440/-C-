#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int max = 0;
	int count = 0;
	for (i = 1; i <= 10; i++)
	{
		int a = 0;
		scanf("%d", &a);
		if (a > max)
		{
			max = a;
			count = i-1;
		}
	}
	printf("最大值为：%d,序号为：%d", max, count);
	return 0;
}