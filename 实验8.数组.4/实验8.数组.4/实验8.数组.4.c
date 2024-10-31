#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请输入8个整数:\n");
	int arr[8];
	int count1 = 0;//正数个数
	int count2 = 0;//0的个数
	int count3 = 0;//负数的个数
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		int a = 0;
		printf("整数%d:", i + 1);
		scanf("%d", &a);
		arr[i] = a;
		if (arr[i] < 0)
		{
			count3++;
		}
		else if (arr[i] == 0)
		{
			count2++;
		}
		else
		{
			count1++;
		}
	}
	printf("正数有%d个，0有%d个，负数有%d个。", count1, count2, count3);
	return 0;
}