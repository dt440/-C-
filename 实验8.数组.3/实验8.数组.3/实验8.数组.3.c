#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10];
	int max = 0;//最大数
	int count=0;//下标
	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		int a = 0;
		printf("整数%d:", i+1);
		scanf("%d", &a);
		arr[i] = a;
		if (arr[i] > max)
		{
			max = arr[i];
			count = i;
		}
	}
	printf("max=%d,下标为%d", max, count);
	return 0;
}