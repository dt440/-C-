#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k = 0;
	printf("������һ������");
	scanf("%d", &k);
	if (k % 3 == 0)
	{
		printf("�ܱ�3����\n");
	}
	else
	{
		printf("���ܱ�3����\n");
	}
	if (k % 5 == 0)
	{
		printf("�ܱ�5����\n");
	}
	else
	{
		printf("���ܱ�5����\n");
	}
	if (k % 7 == 0)
	{
		printf("�ܱ�7����\n");
	}
	else
	{
		printf("���ܱ�7����\n");
	}
	return 0;
}