#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	printf("���������2�����ݣ�");
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("��������˳�����");
		return 0;
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d��������",n);
			return 0;
		}
	}
	printf("%d������", n);
	return 0;
}