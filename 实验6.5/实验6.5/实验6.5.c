#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int k = 0;
	int sum = 0;
	printf("��������Ҫ����������");
	scanf("%d", &k);
	printf("������%d����\n", k);
	while (k > 0)
	{
		k--;
		int a=0;
		scanf("%d",&a);
		if (a < 0)
		{
			continue;
		}
		else
		{
			sum += a;
		}
	}
	printf("%d", sum);
	return 0;
}