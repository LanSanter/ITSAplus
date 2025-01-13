#include <stdio.h>
#include <stdlib.h>

int main() {
    float h;    // 身高
    int se;     // 性別 (1: 男性, 其他: 女性)
    char input[100]; // 用於儲存輸入的字串

    while (1) {
        // 讀取一行輸入
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break; // 如果沒有更多輸入則退出
        }

        // 解析輸入
        sscanf(input, "%f %d", &h, &se);

        // 計算理想體重
        if (se == 1) {
            printf("%.1f\n", (h - 80) * 0.7);
        } else {
            printf("%.1f\n", (h - 70) * 0.6);
        }
    }

    return 0;
}
