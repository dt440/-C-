#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int m, n;
	printf("�����������е��·ݣ�1-12\n");
	scanf("%d", &m);
	printf("��ѡ��ͷ�Ȳգ�1�����Ǿ��òգ�2����\n");
	scanf("%d", &n);
	double x = 5000.0;
	if (m >= 4 && m <= 10)
	{
		if (n == 1)
		{
			x *= 0.9;
		}
		else
		{
			x *= 0.8;
		}
	}
	if (m <= 3 && m >= 1 || m >= 11 && m <= 12)
	{
		if (n == 1)
		{
			x *= 0.5;
		}
		else
		{
			x *= 0.4;
		}
	}
	printf("���Ļ�Ʊ�۸�Ϊ��%.2lf",x);


	return 0;

}