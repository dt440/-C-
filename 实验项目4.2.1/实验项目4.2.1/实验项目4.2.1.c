#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char ch;
	printf("������һ���ַ���");
	scanf("%c", &ch);
	if (ch>='a' && ch <= 'z')
	{
		printf("��ǰ�ַ�ΪСд��ĸ%c,���Ӧ�Ĵ�д��ĸΪ%c", ch, ch - 'a'+'A');
	}
	else if (ch>='A' && ch <= 'Z')
	{
		printf("��ǰ�ַ�Ϊ��д��ĸ%c,���Ӧ��Сд��ĸΪ%c", ch, ch -'A'+'a');
	}
	else if (ch == ' ')
	{
		printf("��ǰ�ַ�Ϊ�ո�");
	}
	else if (ch>='0'&&ch<='9')
	{
		printf("%c", ch);
	}
	else
	{
		printf("��ǰ�ַ�Ϊ�����ַ�");
	}
	return 0;
}