#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 1;//�ұߵĳ���
	int k = 1;//��ߵĳ���
	for (i = 1; i <= 9; i++)
	{
		for (k = 1; k <= i; k++)
		{
			printf("%d*%d=%d ", k, i, i * k);
		}
		printf("\n");
	}

	return 0;
}