#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double k = 0;
	printf("请输入一个实数");
	scanf("%lf", &k);
	int x = k;
	if (k - x == 0)
	{
		printf("%d,无小数部分", x);
	}
	else
	{
		printf("%d\n%lf", x, k - x);
	}
	return 0;
}