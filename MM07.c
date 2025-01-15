#include <stdio.h>
#include <string.h>

// 函數：計算 N 在 M 中出現的次數
int count_occurrences(int n, long long m) {
    char str_n[3], str_m[8];

    // 將 N 和 M 轉換為字串
    sprintf(str_n, "%d", n);
    sprintf(str_m, "%lld", m);

    int count = 0;
    char *pos = str_m;

    // 找到 N 在 M 中的出現次數
    while ((pos = strstr(pos, str_n)) != NULL) {
        count++;
        pos++; // 指標向後移動，繼續搜尋
    }

    return count;
}

int main() {
    int n;
    long long m;

    // 讀取輸入的 N 和 M
    while (scanf("%d %lld", &n, &m) != EOF) {
        // 計算並輸出結果
        printf("%d\n", count_occurrences(n, m));
    }

    return 0;
}
