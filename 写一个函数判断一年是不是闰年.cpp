#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int is_leap_year (int x)
{
	if (x % 4 == 0&&x%100!=0)
		return 1;
	if (x % 400 == 0)
		return 1;

}
int main()
{
	int i;
	scanf("%d", &i);
	is_leap_year(i);
	if (is_leap_year(i) == 1)
		printf("%d������",i);
	else
		printf("%d��������",i);

	return 0;
}