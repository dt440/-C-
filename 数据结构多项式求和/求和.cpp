#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef int Status;
typedef struct PolyNode {
    float coef; // 系数
    int expn; // 指数
    struct PolyNode* next;
} PolyNode, * PolyNomial;

Status PolyInsert(PolyNomial& L, PolyNode* s) {
    if (s->coef == 0) {
        free(s);
        return 1;
    }
    PolyNode* p = L, * q = NULL;
    while (p && p->expn < s->expn) {
        q = p;
        p = p->next;
    }
    if (p && p->expn == s->expn) {
        p->coef += s->coef;
        free(s);
        return 1;
    }
    else {
        s->next = p;
        if (q == NULL) {
            L = s;
        }
        else {
            q->next = s;
        }
    }
    return 1;
}

Status CreatPolynList(PolyNomial& L, int n) {
    L = NULL;
    for (int i = 0; i < n; i++) {
        PolyNode* s = (PolyNode*)malloc(sizeof(PolyNode));
        scanf("%f,%d", &s->coef, &s->expn);
        PolyInsert(L, s);
    }
    return 1;
}

Status PolyAdd(PolyNomial& La, PolyNomial Lb) {
    PolyNode* pa = La, * pb = Lb;
    PolyNomial Lc = NULL;
    while (pa && pb) {
        PolyNode* s = (PolyNode*)malloc(sizeof(PolyNode));
        if (pa->expn < pb->expn) {
            s->coef = pb->coef;
            s->expn = pb->expn;
            pb = pb->next;
        }
        else if (pa->expn > pb->expn) {
            s->coef = pa->coef;
            s->expn = pa->expn;
            pa = pa->next;
        }
        else {
            s->coef = pa->coef + pb->coef;
            s->expn = pa->expn;
            pa = pa->next;
            pb = pb->next;
        }
        if (s->coef != 0 || s->expn != 0) {
            PolyInsert(Lc, s);
        }
    }
    while (pa) {
        PolyNode* s = (PolyNode*)malloc(sizeof(PolyNode));
        s->coef = pa->coef;
        s->expn = pa->expn;
        pa = pa->next;
        if (s->coef != 0 || s->expn != 0) {
            PolyInsert(Lc, s);
        }
    }
    while (pb) {
        PolyNode* s = (PolyNode*)malloc(sizeof(PolyNode));
        s->coef = pb->coef;
        s->expn = pb->expn;
        pb = pb->next;
        if (s->coef != 0 || s->expn != 0) {
            PolyInsert(Lc, s);
        }
    }
    if (Lc == NULL) {
        La = NULL;
    }
    else {
        La = Lc;
    }
    return 1;
}



void DisplayPoly(PolyNomial L) {
    PolyNode* p = L;
    if (p == NULL) {
        printf("空！");
        return;
    }
    while (p) {
        if (p->coef < 0) {
            if (p->expn == 0) {
                printf("%.2f", p->coef);
            }
            else if (p->expn == 1) {
                printf("%.2fx", p->coef);
            }
            else {
                printf("%.2fx^%d", p->coef, p->expn);
            }
        }
        else {
            if (p->expn == 0) {
                printf("%.2f", p->coef);
            }
            else if (p->expn == 1) {
                printf("+%.2fx", p->coef);
            }
            else {
                printf("+%.2fx^%d", p->coef, p->expn);
            }
        }
        p = p->next;
    }
    printf(" ");
}

int main() {
    PolyNomial La, Lb;
    int n, m;
    printf("请输入多项式长度：\n");
    scanf("%d", &n);
    CreatPolynList(La, n);
    DisplayPoly(La);
    printf("\n");
    printf("创建第二个多项式：\n");
    printf("请输入多项式长度m：\n");
    scanf("%d", &m);
    CreatPolynList(Lb, m);
    DisplayPoly(Lb);
    printf("\n");
    PolyAdd(La, Lb);
    printf("两个多项式的和为");
    DisplayPoly(La);
    return 0;
}
