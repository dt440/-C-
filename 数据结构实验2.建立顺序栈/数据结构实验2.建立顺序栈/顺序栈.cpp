#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
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

Status GetTop(SqStack S, SElemType& e)//取顺序栈S栈顶元素，并用e返回其值
{
	if (S.base == S.top)               //如果栈空
	{
		printf("The Stack is NULL\n");
		return ERROR;
	}
	e = *(S.top - 1);                //取栈顶元素的值并用e返回
	return OK;
}

Status StackEmpty(SqStack S)//判断顺序栈S是否为空栈，如果为空栈，返回TRUE；否则返回FALSE
{
	if (S.base == S.top)
		return TRUE;
	else
		return FALSE;
}

Status Display(SqStack S)//输出顺序栈S中所有元素的值,顺序为从栈底到栈顶
{
	SElemType* p;
	if (S.base == S.top)               //如果栈空
	{
		printf("The Stack is NULL\n");
		return ERROR;
	}
	printf("栈底到栈顶:");
	for (p = S.base; p < S.top; p++)
		printf("%2c", *p);
	printf("\n");
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

Status ClearStack(SqStack& S)//将顺序栈S清空为空栈
{
	SElemType e;
	while (!StackEmpty(S)) Pop(S, e);//若当前栈非空，则执行出栈操作
	return OK;
}

int main()
{
	SqStack S;
	int i, n;
	SElemType e, ch;
	InitStack(S);                   //初始化空栈S
	printf("请输入顺序栈的长度：");
	scanf("%d", &n);                 //输入当前顺序栈S长度n
	getchar();
	printf("请输入%d个元素：",n);
	for (i = 1; i <= n; i++)               //输入n个元素的值
	{
		scanf("%c", &ch);
		Push(S, ch);
	}
	Display(S);
	Pop(S, e);
	printf("%c出栈\n", e);
	Display(S);
	GetTop(S, e);
	printf("当前栈顶元素的值为:%c\n", e);
	if (!StackEmpty(S)) printf("当前栈非空\n");
	else  printf("当前栈为空栈\n");
	ClearStack(S);
	printf("清空操作后:");
	if (!StackEmpty(S)) printf("当前栈非空\n");
	else  printf("当前栈为空栈\n");
	DestroyStack(S);
	printf("栈已销毁\n");
	return 0;
}
