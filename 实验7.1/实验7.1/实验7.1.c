#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("������Ҫ���뼸������");
	scanf("%d", &N);
	int i = 0;
	int j = 0;//��ʾ��������
	int k = 0;//��ʾ0�ĸ���
	int l = 0;//��ʾ��������
	int max = 0;//���ֵ
	int min = 0;//��Сֵ
	printf("������%d����", N);
	for (i = 0; i < N; i++)
	{
		int x;
		scanf("%d", &x);
		if (x < 0)
		{
			j = j + 1;
			if (x < min)
			{
				min = x;
			}
		}
		else if (x == 0)
		{
			k += 1;
		}
		else
		{
			l += 1;
			if (max < x)
			{
				max = x;
			}
		}
	}
	printf("��������Ϊ��%d\n", l);
	printf("��������Ϊ��%d\n", j);
	printf("0�ĸ���Ϊ��%d\n", k);
	printf("���ֵΪ��%d\n", max);
	printf("��СֵΪ��%d\n", min);


	return 0;
}