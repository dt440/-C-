#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &arr);
		if (strcmp(arr, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else 
		{
			printf("密码错误\n");
			continue;
		}
	}
	if (i >= 3)
	{
		printf("三次密码错误，即将退出程序");
	}
	return 0;
}