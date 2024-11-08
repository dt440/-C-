#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	int max = 0;
	int min = 0;
	int max_ = 0;
	int min_ = 0;
	for (i; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max=min = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max_ = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			min_ = i;
		}
	}
	printf("max=%d,min=%d\n", max, min);
	int temp = arr[max_];
	arr[max_] = arr[min_];
	arr[min_] = temp;
	for (i = 0; i < 10; i++)
	{
			printf("%5d", arr[i]);
	}
	return 0;
}