#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int k = 0;
	int sum = 0;
	printf("请输入需要几个整数：");
	scanf("%d", &k);
	printf("请输入%d个数\n", k);
	while (k > 0)
	{
		k--;
		int a=0;
		scanf("%d",&a);
		if (a < 0)
		{
			continue;
		}
		else
		{
			sum += a;
		}
	}
	printf("%d", sum);
	return 0;
}