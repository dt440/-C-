#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	for (int i = 0; i < 1;)
	{
		int k = 0;
		printf("请输入一个成绩：");
		scanf("%d", &k);
		switch (k / 10)
		{
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("E\n");
			break;
		}
	}
	return 0;
}