#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int k;
	printf("������״̬��:");
	scanf("%d", &k);
	printf("��ǰ״̬Ϊ:");
	switch (k)
	{
	case 1:
		printf("�ȴ�����\n");
		break;
	case 2:
		printf("�ȴ�����\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("��ǩ��\n");
		break;
	case 5:
		printf("��ȡ��\n");
		break;
	default:
		printf("�޷�׷��\n");
	}

	return 0;
}