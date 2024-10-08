#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int k, y;
	printf("请输入本金和年限：");
	scanf("%d,%d", &k, &y);
	switch (y)
	{
		double x;
	case 1:
		x = k * 0.0033 * 12 * 1;
		printf("%.2lf", (double)k + x);
		break;
	case 2:
		x = k * 0.0036 * 12 * 2;
		printf("%.2lf", (double)k + x);
		break;
	case 3:
		x = k * 0.0039 * 12 * 3;
		printf("%.2lf", (double)k + x);
		break;
	case 5:
		x = k * 0.0045 * 12 * 5;
		printf("%.2lf", (double)k + x);
		break;
	case 8:
		x = k * 0.0054 * 12 * 8;
		printf("%.2lf", (double)k + x);
		break;
	default:
		printf("无具体数值无法求和。");
		break;
	}

	return 0;
}