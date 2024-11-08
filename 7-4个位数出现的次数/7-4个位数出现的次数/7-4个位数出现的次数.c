#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int fact = 0;
	int i = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	while (a > 0)
	{
		fact=a % 10;
		a = a / 10;
		if (fact == b)
		{
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}