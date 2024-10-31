#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x = 0;//男人数量
	int y = 0;//女人数量
	int z = 0;//孩子数量
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
					printf("男人有%d 女人有%d 小孩有%d\n", x, y, z);
				}
			}
		}
	}

	return 0;
}