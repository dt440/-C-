#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int month;
	printf("�������·�����");
	scanf("%d", &month);
	switch (month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		printf("�������Ϊ30.\n");
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("�������Ϊ31.\n"); break;
	case 2:
		printf("�������Ϊ28��29.\n"); break;
	default:
		printf("��������\n");


	}

	return 0;
}