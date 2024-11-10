#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define OVERFLOW -2
#define OK 1
#define ERROR 0

typedef int Status;
typedef int QElemType;

typedef struct QNode {
    QElemType data;
    struct QNode* next;
} QNode, * QueuePtr;

typedef struct {
    QueuePtr rear; // βָ��
} LinkQueue;

// ��ʼ������
Status InitQueue(LinkQueue& Q) {
    Q.rear = (QueuePtr)malloc(sizeof(QNode));
    if (!Q.rear) return OVERFLOW;
    Q.rear->next = Q.rear; // ��ʼ��Ϊ�ն���
    return OK;
}

// ��Ӳ���
Status EnQueue(LinkQueue& Q, QElemType e) {
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    if (!p) return ERROR;
    p->data = e;
    p->next = Q.rear->next; // ���뵽��β
    Q.rear->next = p;
    Q.rear = p; // ����βָ��
    return OK;
}

// ���Ӳ���
Status DeQueue(LinkQueue& Q, QElemType& e) {
    if (Q.rear == Q.rear->next) return ERROR; // ����Ϊ��
    QueuePtr p = Q.rear->next->next; // ָ��ͷ���
    e = p->data;
    Q.rear->next->next = p->next; // ɾ��ͷ���
    if (Q.rear->next == p) Q.rear = Q.rear->next; // �������ֻ��һ��Ԫ�أ�����βָ��
    free(p);
    return OK;
}

// ��ӡ�����е�Ԫ��
void PrintQueue(LinkQueue Q) {
    QueuePtr p = Q.rear->next->next; // ����ͷ���
    while (p != Q.rear->next) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    LinkQueue Q;
    InitQueue(Q);
    int n, e;
    printf("��������г���: ");
    scanf("%d", &n);
    printf("����������е�Ԫ��ֵ: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &e);
        EnQueue(Q, e);
    }
    printf("�����е�Ԫ��ֵΪ: ");
    PrintQueue(Q);

    printf("������Ҫ��ӵ�Ԫ��ֵ: ");
    scanf("%d", &e);
    EnQueue(Q, e);
    printf("��Ӻ�Ķ����е�Ԫ��ֵΪ: ");
    PrintQueue(Q);

    DeQueue(Q, e);
    printf("���ӵ�Ԫ��ֵΪ: %d\n", e);
    printf("���Ӻ�Ķ����е�Ԫ��ֵΪ: ");
    PrintQueue(Q);

    return 0;
}

