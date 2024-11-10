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
    QueuePtr rear; // 尾指针
} LinkQueue;

// 初始化队列
Status InitQueue(LinkQueue& Q) {
    Q.rear = (QueuePtr)malloc(sizeof(QNode));
    if (!Q.rear) return OVERFLOW;
    Q.rear->next = Q.rear; // 初始化为空队列
    return OK;
}

// 入队操作
Status EnQueue(LinkQueue& Q, QElemType e) {
    QueuePtr p = (QueuePtr)malloc(sizeof(QNode));
    if (!p) return ERROR;
    p->data = e;
    p->next = Q.rear->next; // 插入到队尾
    Q.rear->next = p;
    Q.rear = p; // 更新尾指针
    return OK;
}

// 出队操作
Status DeQueue(LinkQueue& Q, QElemType& e) {
    if (Q.rear == Q.rear->next) return ERROR; // 队列为空
    QueuePtr p = Q.rear->next->next; // 指向头结点
    e = p->data;
    Q.rear->next->next = p->next; // 删除头结点
    if (Q.rear->next == p) Q.rear = Q.rear->next; // 如果队列只有一个元素，更新尾指针
    free(p);
    return OK;
}

// 打印队列中的元素
void PrintQueue(LinkQueue Q) {
    QueuePtr p = Q.rear->next->next; // 跳过头结点
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
    printf("请输入队列长度: ");
    scanf("%d", &n);
    printf("请输入队列中的元素值: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &e);
        EnQueue(Q, e);
    }
    printf("队列中的元素值为: ");
    PrintQueue(Q);

    printf("请输入要入队的元素值: ");
    scanf("%d", &e);
    EnQueue(Q, e);
    printf("入队后的队列中的元素值为: ");
    PrintQueue(Q);

    DeQueue(Q, e);
    printf("出队的元素值为: %d\n", e);
    printf("出队后的队列中的元素值为: ");
    PrintQueue(Q);

    return 0;
}

