#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("������8������:\n");
	int arr[8];
	int count1 = 0;//��������
	int count2 = 0;//0�ĸ���
	int count3 = 0;//�����ĸ���
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		int a = 0;
		printf("����%d:", i + 1);
		scanf("%d", &a);
		arr[i] = a;
		if (arr[i] < 0)
		{
			count3++;
		}
		else if (arr[i] == 0)
		{
			count2++;
		}
		else
		{
			count1++;
		}
	}
	printf("������%d����0��%d����������%d����", count1, count2, count3);
	return 0;
}