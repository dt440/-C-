#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	while (i < 5)
	{
		int X = 0;
		printf("X=");
		scanf("%d", &X);
		if (X < 0)
		{
			printf("�뾶���������޷�����\n");
		}
		else {
			double a = 0;
			a = X * X * 3.1415926;
			printf("���Ϊ��%6f\n", a);
		}
		i++;
	}
	

	return 0;
}