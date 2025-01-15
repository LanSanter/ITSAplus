#include <stdio.h>
#include <string.h>

// 函數：計算循環小數的循環節長度
int recurring_cycle_length(int numerator, int denominator) {
    int remainders[1000]; // 保存餘數的位置
    memset(remainders, -1, sizeof(remainders)); // 初始化為 -1

    int value = numerator % denominator; // 計算初始餘數
    int position = 0; // 追踪小數位的位置

    while (value != 0 && remainders[value] == -1) {
        remainders[value] = position; // 記錄餘數出現的位置
        value = (value * 10) % denominator; // 計算下一個餘數
        position++;
    }

    if (value == 0) {
        return 0; // 無循環節
    }

    return position - remainders[value]; // 循環節的長度
}

int main() {
    int test_cases;

    // 讀取測試用例數量
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        int n1, d1, n2, d2;

        // 讀取兩個分數
        scanf("%d %d %d %d", &n1, &d1, &n2, &d2);

        // 計算循環節的長度
        int len1 = recurring_cycle_length(n1, d1);
        int len2 = recurring_cycle_length(n2, d2);

        // 判斷勝者
        if (len1 > len2) {
            printf("A\n");
        } else if (len2 > len1) {
            printf("B\n");
        } else {
            printf("T\n");
        }
    }

    return 0;
}
