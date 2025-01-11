#include <stdio.h>

int main() {
    int inputN = 0, t[24] = {0}; // 一天24小時
    scanf("%d", &inputN);

    for (int i = 0; i < inputN; i++) {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        for (int j = a - 1; j < b - 1; j++) { // 將時間段填充到陣列中
            t[j]++;
        }
    }

    inputN = t[0]; // 利用 `inputN` 儲存最大值
    for (int i = 0; i < 24; i++) {
        if (inputN < t[i]) {
            inputN = t[i]; // 尋找最大值
        }
    }

    printf("%d\n", inputN); // 輸出最大值
    return 0;
}
