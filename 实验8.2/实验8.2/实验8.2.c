#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;//��������
	int y = 0;//Ů������
	int z = 0;//��������
	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			for (z = 0; z < 100; z++)
			{
				if ((x + y + z) != 100)
				{
					continue;
				}
				if ((z%2==0) && (4*x+3*y+(z/2))==100)
				{
					printf("������%d Ů����%d С����%d\n", x, y, z);
				}
			}
		}
	}

	return 0;
}