#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, sum, s;
	s = 0;
	sum = 1;
	for (a = 1; a <=10 ; a++)
	{
		sum *= a;
		s += sum;
	}
	printf("%d ", s);
	return 0;
}