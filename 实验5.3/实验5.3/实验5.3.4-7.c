#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("������ѧ���ĳɼ�:");
	scanf("%d", &score);
	if (score >= 90)grade = 'A';
	else if (score >= 80)grade = 'B';
	else if (score >= 70)grade = 'C';
	else if (score >= 60)grade = 'D';
	else grade = 'E';
	printf("score = %d,grade = %c\n", score, grade);
	return 0;
}