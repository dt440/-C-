#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#define LIST_INIT_SIZE 100 //���Ա��ʼ����ռ������
#define LISTINCREMENT 10 //���Ա����ӷ���ռ����
#define ERROR 0
#define OK 1
#define OVERFLOW -2
typedef int ElemType;
typedef int Status;

typedef struct //�ṹ��
{
	ElemType* elem;
	int length;
	int listsize;
}SqList;

Status SqList_Create(SqList& L, int n)//����һ������Ϊn��˳���L
{
	L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));//����Ԥ�����С�Ŀռ�
	if (!L.elem)
	{
		return OVERFLOW;
	}
	L.listsize = LIST_INIT_SIZE;
	L.length = n;
	printf("Please input the Value:\n");
	for (int i = 0; i < L.length; i++) //˳��������и���Ԫ��
	{
		scanf("%d", &L.elem[i]);
	}
	return OK;
}

Status SqList_Insert(SqList& L, int i, ElemType e) //��˳���L�е�i��Ԫ��ǰ������Ԫ��e,����i�ĺϷ�ֵ��1 <= i <= n+1;
{
	if (i<1 || i>L.length + 1) //����λ�ò���ȷ
	{
		return ERROR;
	}
	if (L.length >= L.listsize) //˳���L�ռ�����
	{
		return OVERFLOW;
	}
	for (int j = L.length - 1; j >= i - 1; j--)
	{
		L.elem[j + 1] = L.elem[j]; //����i��Ԫ�ؼ�����Ԫ��λ�������һλ
	}
	L.elem[i - 1] = e; //�ڵ�i��Ԫ��λ�ô�������Ԫ��e
	L.length++; //˳���L�ĳ��ȼ�1
	return OK;
}

Status SqList_Delete(SqList& L,int i, ElemType &e) //��˳���L��ɾ����i��Ԫ�أ�����e����ֵ������i�ĺϷ�ֵ��1 <= i <= n
{
	if (i<1 || i>L.length) //ɾ��λ�ò���ȷ
	{
		return ERROR;
	}
	e = L.elem[i - 1];
	for (int j = i; j <= L.length - 1; j++)
	{
		L.elem[j - 1] = L.elem[j]; //����i+1��Ԫ�ؼ����Ԫ��λ����ǰ��һλ
	}
	L.length--; //˳���L�ĳ��ȼ�һ
	return OK;
}

int SqList_Search(SqList L, ElemType e) //��˳����в���ֵΪe��Ԫ�أ�����ҵ����������ظ�Ԫ����˳����е�λ�ã����򷵻�0
{
	int i;
	for (i = 0; i < L.length && L.elem[i]!=e; i++); //�ӵ�һ��Ԫ�������ν�ÿ��Ԫ��ֵ�����ֵe�Ƚ�
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

void SqList_Output(SqList L) //���˳���L�и���Ԫ��ֵ
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
	scanf("%d", &n); //����˳���ĳ���
	SqList_Create(L, n);
	printf("Please input the insert position:");
	scanf("%d", &i); //�������λ��
	printf("Please input the insert elem:");
	scanf("%d", &e); //���������Ԫ��ֵ
	if (SqList_Insert(L, i, e) == 1)
	{
		printf("The list after insert is:\n");
		SqList_Output(L); //���������˳���
	}
	else
	{
		printf("����ʧ�ܣ�\n"); //����ʧ��
	}
	printf("Please input delete position:");
	scanf("%d", &i); //����ɾ��λ��
	if (SqList_Delete(L, i, e) == 1)
	{
		SqList_Output(L); //���ɾ�����˳���
	}
	else
	{
		printf("ɾ��ʧ��!\n");
	}
	printf("Please input find elem:");
	scanf("%d", &e); //��������ҵ�Ԫ��ֵ
	if (SqList_Search(L, e))
	{
		printf("���ҳɹ���The position is %d\n", SqList_Search(L, e)); //������ҵ���Ԫ�����ڵ�λ��
	}
	else
	{
		printf("����ʧ��!\n"); //�������ʧ��
	}
	return 0;
}