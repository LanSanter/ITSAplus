#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char text[100]; // 定義存儲輸入文字的陣列
    while (scanf("%s", text) != EOF) { // 循環讀取輸入，直到遇到 EOF
        int acc = 0; // 用於累積計算的變數
        int len = strlen(text); // 獲取輸入字串的長度

        for (int i = 0; i < len; i++) { // 遍歷字串中的每個字符
            int bit = (int)(text[i] - 'A' + 1); // 將字符轉換為對應的數值（A=1, B=2, ..., Z=26）
            acc = acc * 26 + bit; // 累積計算基於 26 進制的數值
        }

        printf("%d\n", acc); // 輸出累積的數值
    }

    return 0;
}
