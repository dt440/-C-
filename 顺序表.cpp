#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#define LIST_INIT_SIZE 100 //线性表初始分配空间的容量
#define LISTINCREMENT 10 //线性表增加分配空间的量
#define ERROR 0
#define OK 1
#define OVERFLOW -2
typedef int ElemType;
typedef int Status;

typedef struct //结构体
{
	ElemType* elem;
	int length;
	int listsize;
}SqList;

Status SqList_Create(SqList& L, int n)//创建一个长度为n的顺序表L
{
	L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));//分配预定义大小的空间
	if (!L.elem)
	{
		return OVERFLOW;
	}
	L.listsize = LIST_INIT_SIZE;
	L.length = n;
	printf("Please input the Value:\n");
	for (int i = 0; i < L.length; i++) //顺序输入表中各个元素
	{
		scanf("%d", &L.elem[i]);
	}
	return OK;
}

Status SqList_Insert(SqList& L, int i, ElemType e) //在顺序表L中第i个元素前插入新元素e,其中i的合法值是1 <= i <= n+1;
{
	if (i<1 || i>L.length + 1) //插入位置不正确
	{
		return ERROR;
	}
	if (L.length >= L.listsize) //顺序表L空间已满
	{
		return OVERFLOW;
	}
	for (int j = L.length - 1; j >= i - 1; j--)
	{
		L.elem[j + 1] = L.elem[j]; //将第i个元素及后续元素位置向后移一位
	}
	L.elem[i - 1] = e; //在第i个元素位置处插入新元素e
	L.length++; //顺序表L的长度加1
	return OK;
}

Status SqList_Delete(SqList& L,int i, ElemType &e) //在顺序表L中删除第i个元素，并用e返回值，其中i的合法值是1 <= i <= n
{
	if (i<1 || i>L.length) //删除位置不正确
	{
		return ERROR;
	}
	e = L.elem[i - 1];
	for (int j = i; j <= L.length - 1; j++)
	{
		L.elem[j - 1] = L.elem[j]; //将第i+1个元素及后继元素位置向前移一位
	}
	L.length--; //顺序表L的长度减一
	return OK;
}

int SqList_Search(SqList L, ElemType e) //在顺序表中查找值为e的元素，如果找到，则函数返回该元素在顺序表中的位置，否则返回0
{
	int i;
	for (i = 0; i < L.length && L.elem[i]!=e; i++); //从第一个元素起依次将每个元素值与给定值e比较
	{
		if (i<L.length)
		{
			return i+1;
		}
		else
		{
			return 0;
		}
	}
}

void SqList_Output(SqList L) //输出顺序表L中各个元素值
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%d ", L.elem[i]);
	}
	printf("\n");
}

int main()
{
	SqList L;
	int i, n;
	ElemType e;
	printf("Please input the length:");
	scanf("%d", &n); //输入顺序表的长度
	SqList_Create(L, n);
	printf("Please input the insert position:");
	scanf("%d", &i); //输入插入位置
	printf("Please input the insert elem:");
	scanf("%d", &e); //输入待插入元素值
	if (SqList_Insert(L, i, e) == 1)
	{
		printf("The list after insert is:\n");
		SqList_Output(L); //输出插入后的顺序表
	}
	else
	{
		printf("插入失败！\n"); //插入失败
	}
	printf("Please input delete position:");
	scanf("%d", &i); //输入删除位置
	if (SqList_Delete(L, i, e) == 1)
	{
		SqList_Output(L); //输出删除后的顺序表
	}
	else
	{
		printf("删除失败!\n");
	}
	printf("Please input find elem:");
	scanf("%d", &e); //输入待查找的元素值
	if (SqList_Search(L, e))
	{
		printf("查找成功！The position is %d\n", SqList_Search(L, e)); //输出查找到的元素所在的位置
	}
	else
	{
		printf("查找失败!\n"); //输出查找失败
	}
	return 0;
}