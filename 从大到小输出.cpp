#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//¼òÂÔ°æ
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int n = a;
		a = b;
		b = n;
	}
	if (a < c)
	{
		int n = a;
		a = c;
		c = n;
	}
	if (b < c)
	{
		int n = b;
		b = c;
		c = n;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}

//int main()-------------------------------×Ô¼ºÐ´µÄ
//{
//	int a, b, c;
//	scanf("%d,%d,%d", &a, &b, &c);
//
//	if (a > b && a > c)
//	{
//		printf("%d ",a);
//		if (b > c)
//			printf("%d %d", b, c);
//		else
//		{
//			printf("%d %d", c, b);
//		}
//	}
//	else if(b>a&&b>c)
//	{
//		printf("%d ", b);
//		if (a > c)
//			printf("%d %d", a, c);
//		else
//		{
//			printf("%d %d", c, a);
//		}
//	}
//	else if (c > a && c > b)
//	{
//		printf("%d ", c);
//		if (a > b)
//			printf("%d %d", a, b);
//		else
//		{
//			printf("%d %d", b, a);
//		}
//	}
//	return 0;
//}