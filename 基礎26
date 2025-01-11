#include <stdio.h>

void sort(int c[], int m);

int main() {
    int in = 0;
    scanf("%d", &in); // 讀取輸入數量

    int ar[in]; // 動態大小的陣列（C99 支持）
    for (int i = 0; i < in; i++) {
        scanf("%d", &ar[i]); // 讀取陣列元素
    }

    sort(ar, in);

    // 逆序輸出結果
    for (int i = in - 1; i >= 0; i--) {
        if (i == 0) {
            printf("%d\n", ar[i]);
        } else {
            printf("%d ", ar[i]);
        }
    }

    return 0;
}

void sort(int c[], int m) {
    int b[m]; // 存放每個數字的數位總和
    for (int j = 0; j < m; j++) {
        b[j] = 0;
        int a = c[j];
        // 計算數字的數位總和
        while (a > 0) {
            b[j] += a % 10;
            a /= 10;
        }
    }

    // 泡沫排序
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            // 根據數位總和排序，若相同則按數值大小排序
            if (b[i] > b[j] || (b[i] == b[j] && c[i] > c[j])) {
                // 交換數位總和
                int tb = b[i];
                b[i] = b[j];
                b[j] = tb;

                // 交換對應的數字
                int tc = c[i];
                c[i] = c[j];
                c[j] = tc;
            }
        }
    }
}
