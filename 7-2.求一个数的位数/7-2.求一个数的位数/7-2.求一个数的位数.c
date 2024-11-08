#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d",&a);
	int digit=0;
	for (digit=0;a!=0 ; digit++)
	{
		if (a < 0)
		{
			a = -a;
		}
		a /= 10;
	}
	if (digit > 0) {
		printf("digit = %d", digit);
	}
	else if (digit == 0)
	{
		printf("digit = 1");
	}
	return 0;
}