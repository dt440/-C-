#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("������һ��������\n");
	scanf("%d",&N);
	int number = 0;
	if (N < 0)
	{
		N = -N;
	}
	while (N > 0)
	{
		N = N / 10;
		number += 1;
	}
	printf("��������%dλ��", number);
	return 0;
}