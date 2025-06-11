#include <stdio.h>

int main() {
    char in[6]; // 用於儲存輸入的日期字符串（格式為 MM/DD）
    int m, d;

    // 讀取輸入
    fgets(in, sizeof(in), stdin);

    // 提取月份和日期
    m = 10 * (in[0] - '0') + (in[1] - '0'); // 月份轉換為數字
    d = 10 * (in[3] - '0') + (in[4] - '0'); // 日期轉換為數字

    // 判斷星座
    switch (m) {
        case 1:
            printf(d < 21 ? "Capricorn\n" : "Aquarius\n");
            break;
        case 2:
            printf(d < 19 ? "Aquarius\n" : "Pisces\n");
            break;
        case 3:
            printf(d < 21 ? "Pisces\n" : "Aries\n");
            break;
        case 4:
            printf(d < 21 ? "Aries\n" : "Taurus\n");
            break;
        case 5:
            printf(d < 22 ? "Taurus\n" : "Gemini\n");
            break;
        case 6:
            printf(d < 22 ? "Gemini\n" : "Cancer\n");
            break;
        case 7:
            printf(d < 23 ? "Cancer\n" : "Leo\n");
            break;
        case 8:
            printf(d < 24 ? "Leo\n" : "Virgo\n");
            break;
        case 9:
            printf(d < 24 ? "Virgo\n" : "Libra\n");
            break;
        case 10:
            printf(d < 24 ? "Libra\n" : "Scorpio\n");
            break;
        case 11:
            printf(d < 23 ? "Scorpio\n" : "Sagittarius\n");
            break;
        case 12:
            printf(d < 22 ? "Sagittarius\n" : "Capricorn\n");
            break;
    }

    return 0;
}
