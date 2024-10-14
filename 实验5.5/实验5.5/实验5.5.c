#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	printf("           学生成绩管理系统           \n");
	printf("****************菜单******************\n");
	printf("*           1.输入总成绩             *\n");
	printf("*           2.求最高、最低成绩       *\n");
	printf("*           3.计算总成绩，平均成绩   *\n");
	printf("*           4.统计不及格的成绩个数   *\n");
	printf("*           5.对成绩进行排序         *\n");
	printf("*           0.退出                   *\n");
	printf("****************菜单******************\n");
	printf("请输入您的操作选择[0-5]:");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("您选择的菜单为：1.输入总成绩");
		break;
	case 2:
		printf("您选择的菜单为：2.求最高、最低成绩");
		break;
	case 3:
		printf("您选择的菜单为：3.计算总成绩，平均成绩");
		break;
	case 4:
		printf("您选择的菜单为：4.统计不及格的成绩个数");
		break;
	case 5:
		printf("您选择的菜单为：5.对成绩进行排序 ");
		break;
	case 0:
		printf("程序即将退出，谢谢使用！");
		break;
	}
	return 0;
}