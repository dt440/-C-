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
	int ret =rand() % 100+1;//范围在1-100内
	int guess = 0;
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
	    }
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请输入0或1:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("请重新输入：\n");
		}
	} while (input);
	return 0;
}