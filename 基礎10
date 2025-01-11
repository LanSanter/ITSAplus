#include <stdio.h>

int euc(int a, int b); // 輾轉相除法遞迴函式宣告

int main() {
    int input = 0, input2 = 0, c = 0;

    scanf("%d %d", &input, &input2); // 輸入兩個整數
    if (input < input2) { // 確認大小順序
        c = input;
        input = input2;
        input2 = c;
    }
    printf("%d\n", euc(input, input2)); // 輸出最大公因數
    return 0;
}

int euc(int a, int b) { // 輾轉相除法遞迴函式
    int f = a % b;
    if (f == 0) {
        return b;
    } else {
        return euc(b, f);
    }
}
