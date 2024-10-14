#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int month;
	printf("请输入月份数：");
	scanf("%d", &month);
	switch (month)
	{
	case 4:
	case 6:
	case 9:
	case 11:
		printf("最大天数为30.\n");
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("最大天数为31.\n"); break;
	case 2:
		printf("最大天数为28或29.\n"); break;
	default:
		printf("错误输入\n");


	}

	return 0;
}