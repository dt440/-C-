#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;//成绩
	int a = 0;
	int b = 0;
	int c = -1;
	while (m != -1)
	{
		scanf("%d", &m);
		if (m >= 90)
		{
			a++;
		}
		else if (m >= 60)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	printf("A等级%d人\n", a);
	printf("P等级%d人\n", b);
	printf("F等级%d人\n", c);

	return 0;
}