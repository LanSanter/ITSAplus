#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[100], *token;
    int mon[4];

    // 讀取輸入字串
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // 去除換行符

    // 分割字串並存入陣列
    token = strtok(input, ",");
    for (int i = 0; i < 4 && token != NULL; i++) {
        mon[i] = atoi(token); // 轉換為整數
        token = strtok(NULL, ",");
    }

    // 判斷是否零錢足夠
    if (mon[0] > mon[1] * 15 + mon[2] * 20 + mon[3] * 30) {
        // 計算剩餘金額
        mon[0] = mon[0] - mon[1] * 15 - mon[2] * 20 - mon[3] * 30;
        mon[2] = mon[0] / 50; // 計算 50 元硬幣數量
        mon[0] %= 50;         // 剩餘金額
        mon[1] = mon[0] / 5;  // 計算 5 元硬幣數量
        mon[0] %= 5;          // 剩餘金額

        // 輸出結果
        printf("%d,%d,%d\n", mon[0], mon[1], mon[2]);
        return 0;
    } else {
        // 金額不足
        printf("0\n");
        return 0;
    }
}
