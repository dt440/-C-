#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int da[4][3] = {1,9,5,7,3,2,6,2,7,4,8,0};
	printf("��1�еĺ�Ϊ��%d\n", da[0][0] + da[0][1] + da[0][2]);
	printf("��2�еĺ�Ϊ��%d\n", da[1][0] + da[1][1] + da[1][2]);
	printf("��3�еĺ�Ϊ��%d\n", da[2][0] + da[2][1] + da[2][2]);
	printf("��4�еĺ�Ϊ��%d\n", da[3][0] + da[3][1] + da[3][2]);

	return 0;
}