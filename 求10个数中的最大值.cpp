#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int arr[] = { 5,3,1,7,4,6,8,10,9,2 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	for (i = 0; i < sz; i++)
	{
		
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d ", max);
	return 0;
}