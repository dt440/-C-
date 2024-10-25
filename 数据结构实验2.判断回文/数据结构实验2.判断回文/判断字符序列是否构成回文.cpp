#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<string.h>
#define STACK_INIT_SIZE 100           //栈初始分配空间的容量
#define STACKINCREMENT 10             //栈增加分配空间的量
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

Status InitStack(SqStack& S)//创建一个空的顺序栈S
{
	S.base = (SElemType*)malloc(STACK_INIT_SIZE * sizeof(SElemType));//分配预定义大小的空间 
	if (!S.base)                       //如果存储空间分配失败
	{
		printf("OVERFLOW\n");
		return ERROR;
	}
	S.top = S.base;                     //置当前栈顶指针指向栈底位置
	S.stacksize = STACK_INIT_SIZE;      //置当前分配的存储空间容量为STACK_INIT_SIZE的值
	return OK;
}

Status Push(SqStack& S, SElemType e)//在顺序栈S中插入新的元素e，使其成为新的栈顶元素
{
	if (S.top - S.base >= S.stacksize)    //当前存储空间满，则扩充空间
	{
		S.base = (SElemType*)malloc((S.stacksize + STACKINCREMENT) * sizeof(SElemType));
		if (!S.base)                  //如果存储空间分配失败
		{
			printf("OVERFLOW\n");
			return ERROR;
		}
		S.top = S.base + S.stacksize;    //栈顶指针重新指向当前栈顶元素的下一位置
		S.stacksize += STACKINCREMENT; //修改增加空间后的存储空间容量
	}
	*(S.top)++ = e;                    //e进栈后，栈顶指针后移一位
	return OK;
}

Status Pop(SqStack& S, SElemType& e)//删除顺序栈S中的栈顶元素，并用e返回其值
{
	if (S.base == S.top)               //如果栈空
	{
		printf("The Stack is NULL\n");
		return ERROR;
	}
	e = *--S.top;                    //删除栈顶元素并用e返回其值
	return OK;
}

Status DestroyStack(SqStack& S)//将顺序栈S销毁
{
	free(S.base);                 //释放已分配的存储空间
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
	printf("请输入字符串：");
	scanf("%s", &str);
	if (IsHuiWen(str))
		printf("此字符序列构成回文\n");
	else
		printf("此字符序列不构成回文\n");
}