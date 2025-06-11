#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    while (scanf("%d", &input) != EOF) { // 讀入整數，直到 EOF
        printf("%.1f\n", input * 1.6); // 輸出小數點後 1 位的結果
    }
    
    return 0;
}
