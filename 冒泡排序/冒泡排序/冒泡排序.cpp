#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;
		int flag = 1;
		for(j=0 ;j<sz-1-i ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;
		    }
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(i=0 ;i<sz ;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}