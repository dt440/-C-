#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int k, n, m;
	scanf("%d %d %d", &k, &n, &m);
	int arr[40];
	arr[0] = 1;
	arr[1] = 1;
	int i;
	for (i = 2; i < k; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("F(%d)=%d,",n, arr[n]);
	printf("F(%d)=%d\n",m, arr[m]);
	printf("黄金比例约等于：%.3f", (double)arr[n] / (double)arr[m]);

	return 0;
}