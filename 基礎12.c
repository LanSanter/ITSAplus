#include <stdio.h>
#include <math.h>

int m(int input); // 函式宣告

int main() {
    int input = 0;

    // 輸入整數
    scanf("%d", &input);
    
    // 輸出函式的值
    printf("%d\n", m(input));
    
    return 0;
}

int m(int input) {
    if (input == 0 || input == 1) { // 當輸入值為 0 或 1
        return input + 1;
    } else {
        return m(input - 1) + m((int)floor(input / 2.0));
        // 使用 floor 向下取整
    }
}
