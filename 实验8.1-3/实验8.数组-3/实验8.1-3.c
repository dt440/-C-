#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int i = 0;
	int flag = 1;
	printf("���������2�����ݣ�");
	scanf("%d", &n);
	if (n <= 2)
	{
		printf("��������˳�����");
		return 0;
	}
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		printf("%d������", n);
	}
	else
	{
		printf("%d��������", n);
	}
	return 0;
}