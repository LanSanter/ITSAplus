#include <stdio.h>
#include <string.h>

int main() {
    char in[11];
    fgets(in, sizeof(in), stdin);

    // 去掉換行符（如有）
    in[strcspn(in, "\n")] = '\0';

    // 性別檢測
    if ((in[1] - '0') < 1 || (in[1] - '0') > 2) {
        printf("WRONG!!!\n");
        return 0;
    }

    // 數字區域是否為數字
    for (int i = 1; i < 9; i++) {
        if (in[i] < '0' || in[i] > '9') {
            printf("WRONG!!!\n");
            return 0;
        }
    }

    // 區域碼轉換
    int p = 0, loc = (int)in[0];
    if (loc < 'A' || loc > 'Z') {
        printf("WRONG!!!\n");
        return 0;
    } else if (loc <= 'H') {
        loc -= 55; // A~H
    } else if (loc == 'I') {
        loc = 34; // I
    } else if (loc > 'H' && loc <= 'N') {
        loc -= 56; // J~N
    } else if (loc == 'O') {
        loc = 35; // O
    } else if ((loc > 'O' && loc <= 'V') || loc == 'Z') {
        loc -= 57; // P~V && Z
    } else if (loc == 'W') {
        loc = 32; // W
    } else if (loc > 'W' && loc <= 'Y') {
        loc -= 58; // X、Y
    }

    // 計算公式
    p = (loc / 10) + 9 * (loc % 10); // 區域碼計算
    for (int i = 1; i < 9; i++) {
        p += (9 - i) * (in[i] - '0'); // 逐位計算
    }

    // 檢查碼判定
    if (10 - (p % 10) != (in[9] - '0')) {
        printf("WRONG!!!\n");
        return 0;
    } else {
        printf("CORRECT!!!\n");
        return 0;
    }
}
