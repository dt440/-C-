#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int A[n][m];
    int B[m][k];
    int C[n][k];

    // �������A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // �������B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // ��ʼ������CΪ0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j] = 0;
        }
    }

    // �������˷�C = A * B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }

    // �������C
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d", C[i][j]);
            if (j != k - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
