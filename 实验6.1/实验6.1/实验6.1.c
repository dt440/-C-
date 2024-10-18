#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int s = 0;
	int i = 1;
	while (i < 51)
	{
		s += i;
		i++;
	}
	printf("%d", s);
	return 0;
}