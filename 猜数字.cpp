#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************************\n");
	printf("*****1.play         0.exit*****\n");
	printf("*******************************\n");
}
void game()
{
	int ret =rand() % 100+1;//��Χ��1-100��
	int guess = 0;
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
	    }
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL) );
	do {
		menu();
		printf("������0��1:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("���������룺\n");
		}
	} while (input);
	return 0;
}