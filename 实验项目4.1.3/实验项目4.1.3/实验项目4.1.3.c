#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int k;
	printf("请输入状态码:");
	scanf("%d", &k);
	printf("当前状态为:");
	switch (k)
	{
	case 1:
		printf("等待付款\n");
		break;
	case 2:
		printf("等待发货\n");
		break;
	case 3:
		printf("运输中\n");
		break;
	case 4:
		printf("已签收\n");
		break;
	case 5:
		printf("已取消\n");
		break;
	default:
		printf("无法追踪\n");
	}

	return 0;
}