#include <stdio.h>
#include <stdbool.h>

int main() {
    int an = 0, ana[4], ain[4];

    // 讀取目標數字
    scanf("%d", &an);

    // 將目標數字分解到陣列中（逆向讀入）
    for (int i = 3; i >= 0; i--) {
        ana[i] = an % 10;
        an /= 10;
    }

    while (true) { // 無限迴圈
        int in = 0, a = 0, b = 0;

        // 讀取猜測數字
        scanf("%d", &in);

        an = 0; // 初始化計數器（用於檢測是否輸入全 0）

        // 將猜測數字分解到陣列中（逆向讀入）
        for (int i = 3; i >= 0; i--) {
            ain[i] = in % 10;
            in /= 10;

            // 判定是否 0
            if (ain[i] == 0) {
                an++;
            }

            // 判定位置和數值是否正確
            if (ain[i] == ana[i]) {
                a++;
            } else {
                // 判定是否存在於其他位置
                for (int j = 0; j < 4; j++) {
                    if (ain[i] == ana[j] && j != i) {
                        b++;
                        break;
                    }
                }
            }
        }

        // 判定是否輸入全 0（結束迴圈條件）
        if (an == 4) {
            break;
        } else {
            // 輸出結果
            printf("%dA%dB\n", a, b);
        }
    }

    return 0;
}
