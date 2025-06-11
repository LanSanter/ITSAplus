#include <stdio.h>
#include <math.h>

void m(double r, int p, int n);

int main() {
    double r = 0;
    int n = 0, p = 0;

    // 讀取利率 r，年數 n，本金 p
    scanf("%lf %d %d", &r, &n, &p);

    m(r, p, n);

    return 0;
}

void m(double r, int p, int n) {
    int s = p;
    int pm[30], pt[30];
    int rr = floor(r * 1000); // 將利率轉換為整數處理

    // 初始化陣列
    for (int i = 0; i < 30; i++) {
        if (i < 11) {
            pm[i] = 0;
        } else {
            pm[i] = p % 10;
            p /= 10;
        }
        pt[i] = 0;
    }

    for (int k = 0; k < n; k++) {
        // 計算 p = p * r
        for (int i = 0; i < 30; i++) {
            pt[i] += pm[i] * rr;
        }

        // 處理進位
        for (int i = 0; i < 29; i++) {
            pt[i + 1] += pt[i] / 10;
            pt[i] %= 10;
        }

        // 整數移位
        for (int i = 3; i < 30; i++) {
            pt[i - 3] = pt[i];
        }

        // 加上本金 p
        for (int i = 0; i < 30; i++) {
            pt[i] += pm[i];
        }

        // 處理進位
        for (int i = 0; i < 29; i++) {
            pt[i + 1] += pt[i] / 10;
            pt[i] %= 10;
        }

        if (k == n - 1) { // 最後一次計算
            int t = 0; // 判定是否為非零值
            for (int i = 29; i >= 11; i--) {
                if (pt[i] != 0 || t) {
                    t = 1;
                    printf("%d", pt[i]);
                    if (i == 11) {
                        printf("\n"); // 換行
                    }
                }
            }
        } else {
            // 加上本金後更新 pm 和重置 pt
            pt[11] += s;
            for (int i = 0; i < 30; i++) {
                pm[i] = pt[i];
                pt[i] = 0;
            }
        }
    }
}
