#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", &arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else 
		{
			printf("�������\n");
			continue;
		}
	}
	if (i >= 3)
	{
		printf("����������󣬼����˳�����");
	}
	return 0;
}