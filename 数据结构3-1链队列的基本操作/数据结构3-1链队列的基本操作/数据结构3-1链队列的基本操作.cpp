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
	QElemType data;    //�������
	struct QNode* next;
}QNode,*QueuePtr;
typedef struct
{
	QueuePtr front;//����ָ��
	QueuePtr rear;//��βָ��
}LinkQueue;

Status InitQueue(LinkQueue& Q)//����һ���յ�������Q
{
	Q.front = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front)//Ϊ�����е�ͷ������ռ�
	{
		return OVERFLOW;//����ռ�ʧ��
	}
	Q.front->next = NULL;
	Q.rear = Q.front;	//��βָ��Ҳָ��ͷ���
	return OK;
}

Status EnQueue(LinkQueue& Q, QElemType e)//���:��������Q�в����µ�Ԫ��e,ʹ���Ϊ�µĶ�βԪ��
{
	QueuePtr p;
	p = (QueuePtr)malloc(sizeof(QNode));//Ϊ�½�����洢�ռ�
	if (!p)
		return ERROR;//����ռ�ʧ��
	p->data = e;//e�����½���������
	p->next = NULL; //�½��ָ����ֵΪ NULL
	Q.rear->next = p;//���ӵ���ǰ��β���֮��
	Q.rear = p;//βָ��ָ���µĶ�β���
	return OK;
}

Status DeQueue(LinkQueue& Q, QElemType& e)//����:��������Q��ɾ������Ԫ��,����e������ֵ
{
	QueuePtr p;
	if (Q.rear == Q.front)//�ӿ�
		return ERROR; 
	p = Q.front->next;//ָ��pָ���ɾ���Ķ��׽��
		e = p->data; 
		Q.front->next = p->next; 
		if (p == Q.rear)
			Q.rear = Q.front; 
		free(p); 
		return OK;
}

int QueueLength(LinkQueue Q)//��������Q������Ԫ�صĸ�����������ֵ
{
	QueuePtr p = Q.front->next;//ָ��pָ�����Ԫ��
	int i = 0;
	while (p)
	{
		i++; p = p->next;
	}
	return i;
}


void DestroyQueue(LinkQueue& Q)//����
{
	while (Q.front)//����ͷ������ڵ����н��ռ�ȫ���ͷ�,ͷβָ���ΪNULL
	{
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
}

void ClearQueue(LinkQueue& Q)//����Ѿ����ڵ�������Q
{
	QueuePtr p;
	while (Q.front->next)	//�����н���ͷ��㣬ͷβָ���ָ��ͷ���
	{
		p = Q.front->next;
		Q.front->next = p->next;
		free(p);
	}
	Q.rear = Q.front;
}


Status EmptyQueue(LinkQueue Q)//�п�,��Ϊ�շ���TRUE;���򷵻�FALSE
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


Status DisplayQueue(LinkQueue Q)//�Ӷ��׵���β,�������ѭ������ֻ�и�����Ԫ�ص�ֵ
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
	printf("�����������еĳ���:");
	scanf("%d",&n);
		printf("�������������и�����ֵ��");
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &e);
			EnQueue(Q, e);
		}
	printf("��������Ҫ��ӵ�ֵ:");
	scanf("%d", &k);
	printf("\n");
		printf("��ǰ�����и�Ԫ��ֵΪ:");
	DisplayQueue(Q);
	DeQueue(Q, e);
	printf("%d����\n", e);
	printf("��ǰ���г���Ϊ:%d\n", QueueLength(Q));
		if (!EmptyQueue(Q))
		{
			printf("��ǰ���зǿ�\n");
		}
		else
		printf("��ǰ����Ϊ��\n");
	EnQueue(Q, k);
	printf("��ֵ��Ӻ�:");
	DisplayQueue(Q);
	ClearQueue(Q);
	printf("��ղ�����:");
	if (!EmptyQueue(Q))
	{
		printf("��ǰ���зǿ�\n");
	}
	else
	{
		printf("��ǰ����Ϊ��\n");
	}
		DestroyQueue(Q);
	printf("����������\n");
	return 0;
}