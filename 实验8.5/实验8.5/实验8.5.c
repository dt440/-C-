#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int count1 = 0;//>85
	int count2 = 0;//60-84
	int count3 = 0;//<60
	int i = 0;
	for (; ;)
	{
		i = 0;
		scanf("%d", &i);
		if (i <= 0)
		{
			break;
		}
		if (i >= 85)
		{
			count1++;
		}
		else if (i >= 60)
		{
			count2++;
		}
		else
		{
			count3++;
		}
	}
	printf("优秀生有%d，通过生有%d,不及格生有%d", count1, count2, count3);
	return 0;
}