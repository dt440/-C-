#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	printf("           ѧ���ɼ�����ϵͳ           \n");
	printf("****************�˵�******************\n");
	printf("*           1.�����ܳɼ�             *\n");
	printf("*           2.����ߡ���ͳɼ�       *\n");
	printf("*           3.�����ܳɼ���ƽ���ɼ�   *\n");
	printf("*           4.ͳ�Ʋ�����ĳɼ�����   *\n");
	printf("*           5.�Գɼ���������         *\n");
	printf("*           0.�˳�                   *\n");
	printf("****************�˵�******************\n");
	printf("���������Ĳ���ѡ��[0-5]:");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("��ѡ��Ĳ˵�Ϊ��1.�����ܳɼ�");
		break;
	case 2:
		printf("��ѡ��Ĳ˵�Ϊ��2.����ߡ���ͳɼ�");
		break;
	case 3:
		printf("��ѡ��Ĳ˵�Ϊ��3.�����ܳɼ���ƽ���ɼ�");
		break;
	case 4:
		printf("��ѡ��Ĳ˵�Ϊ��4.ͳ�Ʋ�����ĳɼ�����");
		break;
	case 5:
		printf("��ѡ��Ĳ˵�Ϊ��5.�Գɼ��������� ");
		break;
	case 0:
		printf("���򼴽��˳���ллʹ�ã�");
		break;
	}
	return 0;
}