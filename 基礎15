#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT 1000

int main() {
    char input[MAX_INPUT];
    int charCount[26] = {0}; // 儲存每個小寫字母的頻率
    int wordsNum = 0;

    // 讀入整行輸入
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = 0; // 去除換行符號

    // 分割單字並統計
    char *token = strtok(input, " ");
    while (token != NULL) {
        wordsNum++; // 計算單字數

        // 遍歷單字中的每個字符並統計
        for (int i = 0; i < strlen(token); i++) {
            if (isalpha(token[i])) { // 判斷是否為字母
                char lower = tolower(token[i]); // 轉換為小寫
                charCount[lower - 'a']++; // 計算小寫字母的頻率
            }
        }

        token = strtok(NULL, " ");
    }

    // 輸出單字數
    printf("%d\n", wordsNum);

    // 輸出字母頻率
    for (int i = 0; i < 26; i++) {
        if (charCount[i] > 0) {
            printf("%c : %d\n", 'a' + i, charCount[i]);
        }
    }

    return 0;
}
