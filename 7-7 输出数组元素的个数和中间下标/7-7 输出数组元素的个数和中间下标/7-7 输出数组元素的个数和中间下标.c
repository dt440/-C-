#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[1000];
	int i = 0;
	int x=1;
	for (i = 0; x!=0; i++)
	{
		scanf("%d", &arr[i]);
		x = arr[i];
	}
	printf("%d %d", i-1, (i-1) / 2);
	return 0;
}