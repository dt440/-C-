#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main(){
	int a, b;
	double c;
	printf("请输入限速和当前车速:\n");
	scanf("%d,%d", &a, &b);
	c = ((double)(b - a) / a * 100);
	if(c<10)
	{
		printf("当前未超速\n");
	}
	else if (c < 50)
	{
		printf("当前车速超出本车道限速的10%，罚款200，扣3分\n");
	}
	else
	{
		printf("超出50%，直接吊销驾驶证\n");
	}
	return 0;
}