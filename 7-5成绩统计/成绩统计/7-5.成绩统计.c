#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;//�ɼ�
	int a = 0;
	int b = 0;
	int c = -1;
	while (m != -1)
	{
		scanf("%d", &m);
		if (m >= 90)
		{
			a++;
		}
		else if (m >= 60)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	printf("A�ȼ�%d��\n", a);
	printf("P�ȼ�%d��\n", b);
	printf("F�ȼ�%d��\n", c);

	return 0;
}