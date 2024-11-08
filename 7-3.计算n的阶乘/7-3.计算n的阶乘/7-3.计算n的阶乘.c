#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i;
    int n;
    double sum = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum = sum * i;
    printf("fact = %.0lf\n", sum);
    return 0;
}