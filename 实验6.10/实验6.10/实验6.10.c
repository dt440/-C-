#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("����һ��������");
	scanf("%d", &N);
	int a = 0;
	int b = 0;
	printf("������%d����", N);
	while (N > 0)
	{
		scanf("%d", &a);
		if (a > b)
		{
			b = a;
		}
		N--;
	}
	printf("������Ϊ��%d", b);
	return 0;
}