#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	printf("������10����ͬ��������\n");
	for (i = 1; i <= 10; i++)
	{
		int a = 0;
		printf("��%d��:", i);
		scanf("%d", &a);
		arr[i - 1] = a;
	}
	int X = 0;
	printf("������Ҫ����ʲô����");
	scanf("%d", &X);
	for (i = 0; i < 10; i++)
	{
		if (X == arr[i])
		{
			printf("�������±�Ϊ%d", i);
			return 0;
		}
	}
	printf("Not found");
	return 0;
}