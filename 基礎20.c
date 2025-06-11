#include <stdio.h>
#include <string.h>

#define MAX_LEN 31 // 每個數字最多 30 位，加上 '\0'

void addLargeNumbers(char *num1, char *num2, char *result);

int main() {
    int n;
    scanf("%d", &n); // 讀取測試資料筆數

    while (n--) {
        char num1[MAX_LEN], num2[MAX_LEN], result[MAX_LEN + 1]; // 結果可能多一位進位
        scanf("%s %s", num1, num2);

        addLargeNumbers(num1, num2, result);
        printf("%s\n", result); // 輸出結果
    }

    return 0;
}

void addLargeNumbers(char *num1, char *num2, char *result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0, idx = 0;

    // 初始化結果為空
    result[0] = '\0';

    // 從低位（末尾）開始逐位計算
    while (len1 > 0 || len2 > 0 || carry > 0) {
        int digit1 = (len1 > 0) ? num1[--len1] - '0' : 0; // 取數字，超出範圍補 0
        int digit2 = (len2 > 0) ? num2[--len2] - '0' : 0;

        // 使用位元運算計算一位的加法
        int sum = digit1 + digit2 + carry;       // 相加（不進位）
        carry = sum/10; // 計算進位

        // 將結果存入臨時結果陣列
        result[idx++] = sum%10 + '0';
    }

    // 反轉結果
    result[idx] = '\0';
    for (int i = 0; i < idx / 2; i++) {
        char temp = result[i];
        result[i] = result[idx - 1 - i];
        result[idx - 1 - i] = temp;
    }
}
