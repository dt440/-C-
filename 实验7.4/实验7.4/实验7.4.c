#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double s = 0.0;
	double i = 2.0;//����
	double j = 1.0;//��ĸ�ĵ�һ������
	for (i = 2.0; ; i++)
	{
		double sum = 1.0;//j�Ľ׳�
		for (j = 1.0; j < i; j++)
		{
			sum *= j;
		}
		if (i / sum <= 0.05)
		{
			break;
		}
		s += i / sum;
	}
	printf("%lf", s);
	return 0;
}