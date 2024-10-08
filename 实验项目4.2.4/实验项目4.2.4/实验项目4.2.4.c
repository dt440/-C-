#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int m, n;
	printf("请输入您出行的月份：1-12\n");
	scanf("%d", &m);
	printf("请选择头等舱（1）还是经济舱（2）：\n");
	scanf("%d", &n);
	double x = 5000.0;
	if (m >= 4 && m <= 10)
	{
		if (n == 1)
		{
			x *= 0.9;
		}
		else
		{
			x *= 0.8;
		}
	}
	if (m <= 3 && m >= 1 || m >= 11 && m <= 12)
	{
		if (n == 1)
		{
			x *= 0.5;
		}
		else
		{
			x *= 0.4;
		}
	}
	printf("您的机票价格为：%.2lf",x);


	return 0;

}