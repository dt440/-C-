#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//左下标
	int right = sz;//右下标
	
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] == k)
		{
			printf("找到数字了，下标为%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到数字");
	}
	return 0;
}