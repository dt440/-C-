#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int Sushu(int x)
{
	int k = 2;
	while (k < x )
	{
		if (x % k != 0)
			k++;
		else
			return 0;
	}
	return 1;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	Sushu(a);
	if (Sushu(a) == 1)
		printf("%d������", a);
	else
		printf("%d��������", a);
	return 0;
}