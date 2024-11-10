#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define OK 1
#define TRUE 1
#define ERROR 0
#define FALSE 0
#define OVERFLOW -2
typedef int Status;
typedef int QElemType;
typedef struct QNode
{
	QElemType data;    //结点类型
	struct QNode* next;
}QNode,*QueuePtr;
typedef struct
{
	QueuePtr front;//队首指针
	QueuePtr rear;//队尾指针
}LinkQueue;

Status InitQueue(LinkQueue& Q)//创建一个空的链队列Q
{
	Q.front = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front)//为链队列的头结点分配空间
	{
		return OVERFLOW;//分配空间失败
	}
	Q.front->next = NULL;
	Q.rear = Q.front;	//队尾指针也指向头结点
	return OK;
}

Status EnQueue(LinkQueue& Q, QElemType e)//入队:在链队列Q中插入新的元素e,使其成为新的队尾元素
{
	QueuePtr p;
	p = (QueuePtr)malloc(sizeof(QNode));//为新结点分配存储空间
	if (!p)
		return ERROR;//分配空间失败
	p->data = e;//e存入新结点的数据域
	p->next = NULL; //新结点指针域赋值为 NULL
	Q.rear->next = p;//链接到当前队尾结点之后
	Q.rear = p;//尾指针指向新的队尾结点
	return OK;
}

Status DeQueue(LinkQueue& Q, QElemType& e)//出队:在链队列Q中删除队首元素,并用e返回其值
{
	QueuePtr p;
	if (Q.rear == Q.front)//队空
		return ERROR; 
	p = Q.front->next;//指针p指向待删除的队首结点
		e = p->data; 
		Q.front->next = p->next; 
		if (p == Q.rear)
			Q.rear = Q.front; 
		free(p); 
		return OK;
}

int QueueLength(LinkQueue Q)//求链队列Q中数据元素的个数并返回其值
{
	QueuePtr p = Q.front->next;//指针p指向队首元素
	int i = 0;
	while (p)
	{
		i++; p = p->next;
	}
	return i;
}


void DestroyQueue(LinkQueue& Q)//销毁
{
	while (Q.front)//包括头结点在内的所有结点空间全部释放,头尾指针均为NULL
	{
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
}

void ClearQueue(LinkQueue& Q)//清空已经存在的链队列Q
{
	QueuePtr p;
	while (Q.front->next)	//队列中仅有头结点，头尾指针均指向头结点
	{
		p = Q.front->next;
		Q.front->next = p->next;
		free(p);
	}
	Q.rear = Q.front;
}


Status EmptyQueue(LinkQueue Q)//判空,若为空返回TRUE;否则返回FALSE
{
	if (Q.front == Q.rear)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


Status DisplayQueue(LinkQueue Q)//从队首到队尾,依次输出循环队列只中各数据元素的值
{
	QueuePtr p;
	if (Q.rear == Q.front)
	{
		return ERROR;
	}
	p = Q.front->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return OK;
}


int main()
{
	LinkQueue Q;
	QElemType e, k;
	int i,n;
	InitQueue(Q);
	printf("请输人链队列的长度:");
	scanf("%d",&n);
		printf("请输入链队列中各结点的值：");
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &e);
			EnQueue(Q, e);
		}
	printf("请输入需要入队的值:");
	scanf("%d", &k);
	printf("\n");
		printf("当前队列中各元素值为:");
	DisplayQueue(Q);
	DeQueue(Q, e);
	printf("%d出队\n", e);
	printf("当前队列长度为:%d\n", QueueLength(Q));
		if (!EmptyQueue(Q))
		{
			printf("当前队列非空\n");
		}
		else
		printf("当前队列为空\n");
	EnQueue(Q, k);
	printf("新值入队后:");
	DisplayQueue(Q);
	ClearQueue(Q);
	printf("清空操作后:");
	if (!EmptyQueue(Q))
	{
		printf("当前队列非空\n");
	}
	else
	{
		printf("当前队列为空\n");
	}
		DestroyQueue(Q);
	printf("队列已销毁\n");
	return 0;
}