#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	int k = 0;
	double sum = 0.0;
	printf("请输入10个整数：\n");
	for (i = 1; i <= 10; i++)
	{
		int a = 0;
		printf("第%d个:", i);
		scanf("%d", &a);
		arr[i-1] = a;
		sum += a;
	}
	printf("平均值为：%lf,且低于平均数的数如下：\n", sum / 10.0);
	for (k = 1; k <= 10; k++)
	{
		if (arr[k - 1] < (sum / 10))
		{
			printf("第%d个%d\n", k,arr[k-1]);
		}
	}
	return 0;
}