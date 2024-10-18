#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int number=0;
	scanf("%d", &number);
	if (number < 0)
	{
		number = -number;
	}
	int sum = 0;
	
	while (number > 0)
	{
		int k = 0;
		k = number % 10;
		number = number / 10;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}