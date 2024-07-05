#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//判断i值是不是闰年：
	//1.i能被4整除并且i不能被100整除
	//2.i可以被400整除
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d\n", i);
		}
		else if (i % 400 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}