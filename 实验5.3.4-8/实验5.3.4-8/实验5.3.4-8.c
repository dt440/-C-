#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("请输入学生的成绩：");
	scanf("%d", &score);
	grade = score >= 90 ? 'A' : score >= 60 ? 'B' : 'C';
	printf("score=%d,grade=%c\n", score, grade);

	return 0;
}