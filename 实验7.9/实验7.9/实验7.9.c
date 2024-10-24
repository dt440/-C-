#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("请输入一个数字：");
	scanf("%d", &a);
	int i = 2;
	while (i<a)
	{
		if (a % i == 0)
		{
			printf("%d不是素数\n", a);
			return 0;
		}
		i++;
	}
	printf("%d是素数", a);

	return 0;
}