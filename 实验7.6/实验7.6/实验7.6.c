#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("��������Ҫ������ٸ��ɼ���");
	scanf("%d", &N);
	int i = 1;
	double sum = 0;//ƽ����
	printf("������%d����\n",N);
	for (i = 1; i <= N; i++)
	{
		int k = 0;
		scanf("%d", &k);
		sum += k;
	}
	double y=(sum =sum*1.0/ N);
	printf("ƽ���ɼ�Ϊ%.2f", y);
	return 0;
}