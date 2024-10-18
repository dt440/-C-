#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int number;
	scanf("%d", &number);
	if (number < 0) {
		number = -number;
	}
	while (number >=1)
	{
		printf("%d ", number%10);
		number = number / 10;
	}

	return 0;
}