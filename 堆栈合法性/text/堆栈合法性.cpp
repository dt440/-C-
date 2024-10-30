#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW -2
#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

typedef char SElemType;
typedef int Status;

typedef struct {
    SElemType* base;
    SElemType* top;
    int stacksize;
} SqStack;

Status Init_S(SqStack* S) {
    S->base = (SElemType*)malloc(sizeof(SElemType) * STACK_INIT_SIZE);
    if (!S->base) exit(OVERFLOW);
    S->top = S->base; // 空栈
    S->stacksize = STACK_INIT_SIZE;
    return OK;
}

Status Push_Stack(SqStack* S, SElemType e) { // ruzhan
    if (S->top - S->base == S->stacksize) { // 如果栈满
        S->base = (SElemType*)realloc(S->base, (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
        if (!S->base) exit(OVERFLOW);
        S->top = S->base + S->stacksize; // 使S.top重新指向栈顶
        S->stacksize += STACKINCREMENT;
    }
    *S->top = e;
    S->top++;
    return OK;
}

Status Empty_Stack(SqStack* S) {
    if (S->top - S->base == 0)
        return TRUE;
    else
        return FALSE;
}

Status Pop_Stack(SqStack* S) {
    if (S->top - S->base == 0)
        return ERROR;
    S->top--;
    return OK;
}

Status Destory_S(SqStack* S) {
    free(S->base);
    S->base = NULL;
    S->top = NULL;
    S->stacksize = 0;
    return OK;
}

int JudgeStacksize(SqStack* S) {
    return (S->top - S->base);
}

int main() {
    int m, n, geshu;
    char e[100]; // 假设输入字符串长度不超过100
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        geshu = 0;
        SqStack S;
        Init_S(&S);
        scanf("%s", e);
        for (int j = 0; j < strlen(e); j++) {
            if (e[j] == 'S') {
                if (!Push_Stack(&S, e[j])) { // 判断不合法情况
                    geshu = 1;
                    break;
                }
            }
            else if (e[j] == 'X') {
                if (!Pop_Stack(&S)) { // 判断不合法情况
                    geshu = 1;
                }
            }
            if (JudgeStacksize(&S) > n) {
                geshu = 1;
            }
        }
        if (!Empty_Stack(&S)) {
            geshu = 1;
        }
        if (geshu == 0) {
            printf("YES");
        }
        else {
            printf("NO");
        }
        if (i != m - 1) {
            printf("\n");
        }
        Destory_S(&S);
    }
    return 0;
}

