#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//�ж�iֵ�ǲ������꣺
	//1.i�ܱ�4��������i���ܱ�100����
	//2.i���Ա�400����
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d\n", i);
		}
		else if (i % 400 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}