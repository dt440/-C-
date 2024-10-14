#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k = 0;
	printf("请输入一个数：");
	scanf("%d", &k);
	if (k % 3 == 0)
	{
		printf("能被3整除\n");
	}
	else
	{
		printf("不能被3整除\n");
	}
	if (k % 5 == 0)
	{
		printf("能被5整除\n");
	}
	else
	{
		printf("不能被5整除\n");
	}
	if (k % 7 == 0)
	{
		printf("能被7整除\n");
	}
	else
	{
		printf("不能被7整除\n");
	}
	return 0;
}