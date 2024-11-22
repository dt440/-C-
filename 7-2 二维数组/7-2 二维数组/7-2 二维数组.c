#include <stdio.h>

int main() {
    int a[10][10];
    int sum = 0;
    double average;

    // 初始化二维数组，并计算主对角线元素的和
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            a[i][j] = (i + 1) * (i + 1) + (j + 1) * (j + 1);
            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    // 计算平均值
    average = sum / 10.0;

    // 输出结果
    printf("%d %.0f\n", sum, average);

    return 0;
}
