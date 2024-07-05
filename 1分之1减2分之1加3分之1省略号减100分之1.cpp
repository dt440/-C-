#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()-------分组求和
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= (1.0 / i);
//		}
//		if (i % 2 != 0)
//		{
//			sum += (1.0 / i);
//		}
//	}
//	printf("%2f", sum);
//	return 0;
//}
//简便方法
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i < 101; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%2f", sum);
	return 0;
}