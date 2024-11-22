#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int n=0;
	scanf("%d", &n);
	int arr[100];
	int i = 0;
	int max1,max2;
	for (i = 0; i < n; i++)
	{
		int x = 0;
		scanf("%d", &x);
		arr[i] = x;
	}
	max1 = max2 = arr[0];
	for (i = 1; i < n; i++)
	{
		if (max1 < arr[i])
		{
			max1 = arr[i];
		}
		if (max2 < arr[i] && max1>arr[i])
		{
			max2 = arr[i];
		}
	}
	printf("%d", max2);
	return 0;
}