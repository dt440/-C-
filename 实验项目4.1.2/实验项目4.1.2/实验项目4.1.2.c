#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main(){
	int a, b;
	double c;
	printf("���������ٺ͵�ǰ����:\n");
	scanf("%d,%d", &a, &b);
	c = ((double)(b - a) / a * 100);
	if(c<10)
	{
		printf("��ǰδ����\n");
	}
	else if (c < 50)
	{
		printf("��ǰ���ٳ������������ٵ�10%������200����3��\n");
	}
	else
	{
		printf("����50%��ֱ�ӵ�����ʻ֤\n");
	}
	return 0;
}