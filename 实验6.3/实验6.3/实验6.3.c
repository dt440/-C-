#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k = 100;
	int sum = 0;
	while (k > 0)
	{
		while (k % 3 == 0)
		{
			sum += k;
			k--;
			continue;
		}
		k--;
	}
	printf("%d", sum);
	return 0;
}