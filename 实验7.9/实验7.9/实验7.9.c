#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("������һ�����֣�");
	scanf("%d", &a);
	int i = 2;
	while (i<a)
	{
		if (a % i == 0)
		{
			printf("%d��������\n", a);
			return 0;
		}
		i++;
	}
	printf("%d������", a);

	return 0;
}