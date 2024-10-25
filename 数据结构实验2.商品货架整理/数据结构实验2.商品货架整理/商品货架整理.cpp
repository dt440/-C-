#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10
#define OK 1
#define TRUE 1
#define ERROR 0
#define FALSE 0

typedef struct  //�����ṹ�����ڱ�ʾ����
{
	int year;
	int month;
	int day;
}Production;

typedef struct
{
	int  number;               //��Ʒ���
	Production  date;          //��Ʒ��������
}SElemType;

typedef int  Status;

typedef struct
{
	SElemType* base;
	SElemType* top;
	int stacksize;
}SqStack;

Status InitStack(SqStack& S)
{
	S.base = (SElemType*)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	if (!S.base)
	{
		printf("OVERFLOW\n");
		return ERROR;
	}
	S.top = S.base;
	S.stacksize = STACK_INIT_SIZE;
	return OK;
}

Status Push(SqStack& S, SElemType e)
{
	if (S.top - S.base >= S.stacksize)
	{
		S.base = (SElemType*)malloc((S.stacksize + STACKINCREMENT) * sizeof(SElemType));
		if (!S.base)
		{
			printf("OVERFLOW\n");
			return ERROR;
		}
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINCREMENT;
	}
	*(S.top)++ = e;
	return OK;
}

Status Pop(SqStack& S, SElemType& e)
{
	if (S.base == S.top)
		return ERROR;
	e = *--S.top;
	return OK;
}

Status GetTop(SqStack& S, SElemType& e)
{
	if (S.base == S.top)
		return ERROR;
	e = *(S.top - 1);
	return OK;
}
Status StackEmpty(SqStack& S)
{
	if (S.base == S.top)
		return TRUE;
	else
		return FALSE;
}

Status Display(SqStack& S)
{
	SElemType* p;
	printf("��չʾ�ܵ׵�չʾ�ܶ�:\n");
	for (p = S.base; p < S.top; p++)
		printf("%d,%d-%d-%d\n", (*p).number, (*p).date.year, (*p).date.month, (*p).date.day);
	return OK;
}

Status DestroyStack(SqStack& S)
{
	free(S.base);
	S.base = NULL;
	S.top = NULL;
	S.stacksize = 0;
	return OK;
}

Status ClearStack(SqStack& S)
{
	SElemType e;
	while (!StackEmpty(S)) Pop(S, e);
	return OK;
}


int Compare(Production A, Production B)//�Ƚ���������A��B��������A��B�緵��1�����򷵻�0
{
	if (A.year < B.year)
		return 1;
	if (A.year == B.year && A.month < B.month)
		return 1;
	if (A.year == B.year && A.month == B.month && A.day < B.day)
		return 1;
	return 0;
}

Status StackSort(SqStack& S)//��ջ�����������ڽ������Ʒ��ջ��
{
	SqStack temp;
	InitStack(temp);
	SElemType e, f;
	while (!StackEmpty(S))                            //��ǰջS�ǿ�ʱ
	{
		Pop(S, e);                                    //��ǰջSջ��Ԫ�س�ջ������e����
		while (!StackEmpty(temp))                     //����ʱջtemp�ǿ�
		{
			GetTop(temp, f);                          //ȡ��ʱջtemp��ǰջ��Ԫ�ص�ֵ������f����
			if (Compare(f.date, e.date) == 0)            //����Ʒf����������������Ʒe���������ڣ�e��f��������               
			{
				Pop(temp, f);                         //��ʱջtemp�е�ǰջ��Ԫ�س�ջ����f����
				Push(S, f);                           //����Ʒf�Żص�ջS��
			}
			else
				break;
		}
		Push(temp, e);                               //��Ʒe����ʱջtemp
	}
	while (!StackEmpty(temp))                        //��ʱջtemp�ǿ�ʱ�����γ�ջ����ջS             
	{
		Pop(temp, e);
		Push(S, e);
	}
	return OK;
}

int main()
{
	SqStack S;
	int i, n;
	SElemType goods;
	InitStack(S);
	printf("��������Ʒ����");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("��������Ʒ���");
		scanf("%d", &goods.number);
		getchar();
		printf("��������Ʒ��������(��ʽΪ2021-12-24)");
		scanf("%d-%d-%d", &goods.date.year, &goods.date.month, &goods.date.day);
		Push(S, goods);
	}
	Display(S);
	StackSort(S);
	printf("�����:\n");
	Display(S);
	return 0;
}