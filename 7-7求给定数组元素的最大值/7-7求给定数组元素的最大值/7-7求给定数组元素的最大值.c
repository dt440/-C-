#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[50];
	int i = 0;
	int max = 0;
	for (i; i < 50; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[0] < 0)
		{
			printf("NULL!");
				return 0;
		}
		else if (arr[i] < 0)
		{
			printf("max=%d", max);
			return 0;
		}
		else if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d", max);
	return 0;
}