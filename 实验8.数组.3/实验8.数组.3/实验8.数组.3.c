#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10];
	int max = 0;//�����
	int count=0;//�±�
	printf("������10��������\n");
	for (i = 0; i < 10; i++)
	{
		int a = 0;
		printf("����%d:", i+1);
		scanf("%d", &a);
		arr[i] = a;
		if (arr[i] > max)
		{
			max = arr[i];
			count = i;
		}
	}
	printf("max=%d,�±�Ϊ%d", max, count);
	return 0;
}