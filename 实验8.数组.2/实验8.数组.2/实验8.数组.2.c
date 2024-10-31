#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	printf("请输入10个不同的整数：\n");
	for (i = 1; i <= 10; i++)
	{
		int a = 0;
		printf("第%d个:", i);
		scanf("%d", &a);
		arr[i - 1] = a;
	}
	int X = 0;
	printf("请输入要查找什么数：");
	scanf("%d", &X);
	for (i = 0; i < 10; i++)
	{
		if (X == arr[i])
		{
			printf("该数字下标为%d", i);
			return 0;
		}
	}
	printf("Not found");
	return 0;
}