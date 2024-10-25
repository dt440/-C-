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

typedef struct  //声明结构体用于表示日期
{
	int year;
	int month;
	int day;
}Production;

typedef struct
{
	int  number;               //商品编号
	Production  date;          //商品生产日期
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
	printf("从展示架底到展示架顶:\n");
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


int Compare(Production A, Production B)//比较生产日期A和B的早晚，若A比B早返回1，否则返回0
{
	if (A.year < B.year)
		return 1;
	if (A.year == B.year && A.month < B.month)
		return 1;
	if (A.year == B.year && A.month == B.month && A.day < B.day)
		return 1;
	return 0;
}

Status StackSort(SqStack& S)//堆栈排序，生产日期较早的商品在栈顶
{
	SqStack temp;
	InitStack(temp);
	SElemType e, f;
	while (!StackEmpty(S))                            //当前栈S非空时
	{
		Pop(S, e);                                    //当前栈S栈顶元素出栈，并用e返回
		while (!StackEmpty(temp))                     //若临时栈temp非空
		{
			GetTop(temp, f);                          //取临时栈temp当前栈顶元素的值，并用f返回
			if (Compare(f.date, e.date) == 0)            //若商品f的生产日期晚于商品e的生产日期（e比f早生产）               
			{
				Pop(temp, f);                         //临时栈temp中当前栈顶元素出栈，用f返回
				Push(S, f);                           //将商品f放回到栈S中
			}
			else
				break;
		}
		Push(temp, e);                               //商品e进临时栈temp
	}
	while (!StackEmpty(temp))                        //临时栈temp非空时，依次出栈并进栈S             
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
	printf("请输入商品数：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("请输入商品编号");
		scanf("%d", &goods.number);
		getchar();
		printf("请输入商品生产日期(格式为2021-12-24)");
		scanf("%d-%d-%d", &goods.date.year, &goods.date.month, &goods.date.day);
		Push(S, goods);
	}
	Display(S);
	StackSort(S);
	printf("整理后:\n");
	Display(S);
	return 0;
}