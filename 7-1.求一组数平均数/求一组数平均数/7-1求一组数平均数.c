#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a;
	double sum=0;
	int i ;
	for ( i=0;;i++)
	{
-		scanf("%lf", &a);
		if (a != - 1)
		{
			sum += a;
		}
		else 
		{
			break;
		}
	}
	printf("avg = %.2f", sum / i);
	return 0;
}