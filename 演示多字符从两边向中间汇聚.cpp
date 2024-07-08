#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to China!!!!!";
	char arr2[] = "#####################";
	int left = 0;
	int right = strlen(arr1)-1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s", arr2);
		Sleep(1000);//休息一秒
		system("cls");//执行系统命令的一个函数--“cls”--可以清空屏幕
	}
	printf("%s", arr2);
	return 0;
}