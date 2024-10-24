#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N = 0;
	printf("请输入需要输入多少个成绩：");
	scanf("%d", &N);
	int i = 1;
	double sum = 0;//平均数
	printf("请输入%d个数\n",N);
	for (i = 1; i <= N; i++)
	{
		int k = 0;
		scanf("%d", &k);
		sum += k;
	}
	double y=(sum =sum*1.0/ N);
	printf("平均成绩为%.2f", y);
	return 0;
}