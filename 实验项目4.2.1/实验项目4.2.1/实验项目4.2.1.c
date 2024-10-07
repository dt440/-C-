#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char ch;
	printf("请输入一个字符：");
	scanf("%c", &ch);
	if (ch>='a' && ch <= 'z')
	{
		printf("当前字符为小写字母%c,其对应的大写字母为%c", ch, ch - 'a'+'A');
	}
	else if (ch>='A' && ch <= 'Z')
	{
		printf("当前字符为大写字母%c,其对应的小写字母为%c", ch, ch -'A'+'a');
	}
	else if (ch == ' ')
	{
		printf("当前字符为空格");
	}
	else if (ch>='0'&&ch<='9')
	{
		printf("%c", ch);
	}
	else
	{
		printf("当前字符为其它字符");
	}
	return 0;
}