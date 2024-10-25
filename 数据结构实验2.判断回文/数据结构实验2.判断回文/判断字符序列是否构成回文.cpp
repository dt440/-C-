#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define STACK_INIT_SIZE 100           //ջ��ʼ����ռ������
#define STACKINCREMENT 10             //ջ���ӷ���ռ����
#define OK 1
#define TRUE 1
#define ERROR 0
#define FALSE 0
typedef char SElemType;
typedef int  Status;

typedef struct {
	SElemType* base;
	SElemType* top;
	int stacksize;
}SqStack;

Status InitStack(SqStack& S)//����һ���յ�˳��ջS
{
	S.base = (SElemType*)malloc(STACK_INIT_SIZE * sizeof(SElemType));//����Ԥ�����С�Ŀռ� 
	if (!S.base)                       //����洢�ռ����ʧ��
	{
		printf("OVERFLOW\n");
		return ERROR;
	}
	S.top = S.base;                     //�õ�ǰջ��ָ��ָ��ջ��λ��
	S.stacksize = STACK_INIT_SIZE;      //�õ�ǰ����Ĵ洢�ռ�����ΪSTACK_INIT_SIZE��ֵ
	return OK;
}

Status Push(SqStack& S, SElemType e)//��˳��ջS�в����µ�Ԫ��e��ʹ���Ϊ�µ�ջ��Ԫ��
{
	if (S.top - S.base >= S.stacksize)    //��ǰ�洢�ռ�����������ռ�
	{
		S.base = (SElemType*)malloc((S.stacksize + STACKINCREMENT) * sizeof(SElemType));
		if (!S.base)                  //����洢�ռ����ʧ��
		{
			printf("OVERFLOW\n");
			return ERROR;
		}
		S.top = S.base + S.stacksize;    //ջ��ָ������ָ��ǰջ��Ԫ�ص���һλ��
		S.stacksize += STACKINCREMENT; //�޸����ӿռ��Ĵ洢�ռ�����
	}
	*(S.top)++ = e;                    //e��ջ��ջ��ָ�����һλ
	return OK;
}

Status Pop(SqStack& S, SElemType& e)//ɾ��˳��ջS�е�ջ��Ԫ�أ�����e������ֵ
{
	if (S.base == S.top)               //���ջ��
	{
		printf("The Stack is NULL\n");
		return ERROR;
	}
	e = *--S.top;                    //ɾ��ջ��Ԫ�ز���e������ֵ
	return OK;
}

Status DestroyStack(SqStack& S)//��˳��ջS����
{
	free(S.base);                 //�ͷ��ѷ���Ĵ洢�ռ�
	S.base = NULL;
	S.top = NULL;
	S.stacksize = 0;
	return OK;
}

Status IsHuiWen(char* str)
{
	SqStack S;
	SElemType e;
	int i = 0, len, mid, flag = 1;
	len = strlen(str);
	mid = len / 2 - 1;
	InitStack(S);
	for (i = 0; i < len / 2; i++)
		Push(S, str[i]);
	if (len % 2) mid = mid + 1;
	for (i = 1; i <= len / 2; i++)
	{
		Pop(S, e);
		if (str[mid + i] == e)
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	DestroyStack(S);
	return flag;
}

int main()
{
	int a = 0;
	char str[100];
	printf("�������ַ�����");
	scanf("%s", &str);
	if (IsHuiWen(str))
		printf("���ַ����й��ɻ���\n");
	else
		printf("���ַ����в����ɻ���\n");
}