#include <stdio.h>

int main() {
    float ar[10], input, max, min;

    // 讀取 10 個浮點數
    for (int i = 0; i < 10; i++) {
        scanf("%f", &input);
        ar[i] = input;

        // 初始化最大值和最小值
        if (i == 0) {
            max = min = ar[i];
        }

        // 更新最大值
        if (ar[i] > max) {
            max = ar[i];
        }

        // 更新最小值
        if (ar[i] < min) {
            min = ar[i];
        }
    }

    // 輸出結果，保留兩位小數
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);

    return 0;
}
