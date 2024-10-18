#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 200;
	int sum = 0;
	while (a > 100)
	{
		while(a%2==0)
		{
			sum += a;
			a--;
			continue;
		}
		a--;
	}
	printf("%d", sum);
	return 0;
}
