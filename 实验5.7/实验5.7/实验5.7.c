#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double k = 0;
	printf("������һ��ʵ��");
	scanf("%lf", &k);
	int x = k;
	if (k - x == 0)
	{
		printf("%d,��С������", x);
	}
	else
	{
		printf("%d\n%lf", x, k - x);
	}
	return 0;
}