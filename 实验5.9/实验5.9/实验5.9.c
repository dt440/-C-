#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int s = 0;
	for (int i = 0; i < 6; i++)
	{
		s += i;
	}
	printf("%d", s);
	return 0;
}