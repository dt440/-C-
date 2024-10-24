#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("请输入要输入几个数：");
	scanf("%d", &N);
	int i = 0;
	int j = 0;//表示负数个数
	int k = 0;//表示0的个数
	int l = 0;//表示正数个数
	int max = 0;//最大值
	int min = 0;//最小值
	printf("请输入%d个数", N);
	for (i = 0; i < N; i++)
	{
		int x;
		scanf("%d", &x);
		if (x < 0)
		{
			j = j + 1;
			if (x < min)
			{
				min = x;
			}
		}
		else if (x == 0)
		{
			k += 1;
		}
		else
		{
			l += 1;
			if (max < x)
			{
				max = x;
			}
		}
	}
	printf("正数个数为：%d\n", l);
	printf("负数个数为：%d\n", j);
	printf("0的个数为：%d\n", k);
	printf("最大值为：%d\n", max);
	printf("最小值为：%d\n", min);


	return 0;
}