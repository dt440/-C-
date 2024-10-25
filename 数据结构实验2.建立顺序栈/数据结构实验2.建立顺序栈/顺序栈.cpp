#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
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

Status GetTop(SqStack S, SElemType& e)//ȡ˳��ջSջ��Ԫ�أ�����e������ֵ
{
	if (S.base == S.top)               //���ջ��
	{
		printf("The Stack is NULL\n");
		return ERROR;
	}
	e = *(S.top - 1);                //ȡջ��Ԫ�ص�ֵ����e����
	return OK;
}

Status StackEmpty(SqStack S)//�ж�˳��ջS�Ƿ�Ϊ��ջ�����Ϊ��ջ������TRUE�����򷵻�FALSE
{
	if (S.base == S.top)
		return TRUE;
	else
		return FALSE;
}

Status Display(SqStack S)//���˳��ջS������Ԫ�ص�ֵ,˳��Ϊ��ջ�׵�ջ��
{
	SElemType* p;
	if (S.base == S.top)               //���ջ��
	{
		printf("The Stack is NULL\n");
		return ERROR;
	}
	printf("ջ�׵�ջ��:");
	for (p = S.base; p < S.top; p++)
		printf("%2c", *p);
	printf("\n");
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

Status ClearStack(SqStack& S)//��˳��ջS���Ϊ��ջ
{
	SElemType e;
	while (!StackEmpty(S)) Pop(S, e);//����ǰջ�ǿգ���ִ�г�ջ����
	return OK;
}

int main()
{
	SqStack S;
	int i, n;
	SElemType e, ch;
	InitStack(S);                   //��ʼ����ջS
	printf("������˳��ջ�ĳ��ȣ�");
	scanf("%d", &n);                 //���뵱ǰ˳��ջS����n
	getchar();
	printf("������%d��Ԫ�أ�",n);
	for (i = 1; i <= n; i++)               //����n��Ԫ�ص�ֵ
	{
		scanf("%c", &ch);
		Push(S, ch);
	}
	Display(S);
	Pop(S, e);
	printf("%c��ջ\n", e);
	Display(S);
	GetTop(S, e);
	printf("��ǰջ��Ԫ�ص�ֵΪ:%c\n", e);
	if (!StackEmpty(S)) printf("��ǰջ�ǿ�\n");
	else  printf("��ǰջΪ��ջ\n");
	ClearStack(S);
	printf("��ղ�����:");
	if (!StackEmpty(S)) printf("��ǰջ�ǿ�\n");
	else  printf("��ǰջΪ��ջ\n");
	DestroyStack(S);
	printf("ջ������\n");
	return 0;
}
