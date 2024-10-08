#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int k = 0;
	scanf("%d", &k);
	if (k < 0 || k>100)
	{
		printf("成绩输入错误，请重新输入");
	}
	else
		if (k / 10 == 9)
		{
			printf("A");
		}
		else if (k / 10 == 8)
		{
			printf("B");
		}
		else if (k / 10 == 7)
		{
			printf("C");
		}
		else if (k / 10 == 6)
		{
			printf("D");
		}
		else if (k / 10 <= 5)
		{
			printf("E");
		}
	return 0;
}