#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max, min;
	max = min = arr[0];
	int maxb, minb;
	maxb = minb = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxb = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			minb = i;
		}
	}
	int temp = max;
	arr[maxb] = min;
	arr[minb] = temp;
	printf("max=%d,min=%d\n", max,min);
	for (i = 0; i < 10; i++)
	{
		printf("%5d", arr[i]);
	}
	return 0;
}