#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	printf("请输入大于2的数据：");
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("输入错误，退出程序");
		return 0;
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d不是素数",n);
			return 0;
		}
	}
	printf("%d是素数", n);
	return 0;
}