#include <stdio.h>

// 函數：計算將 N 減少到 1 的最小步數
int min_steps_to_one(long long n) {
    int steps = 0;

    while (n > 1) {
        if (n % 2 == 0) {
            // 如果是偶數，除以 2
            n /= 2;
        } else {
            // 如果是奇數，選擇最佳操作
            if (n == 3 || ((n - 1) / 2) % 2 == 0) {
                n--; // 減 1
            } else {
                n++; // 加 1
            }
        }
        steps++; // 增加步數計數
    }

    return steps;
}

int main() {
    int test_cases;

    // 讀取測試用例數量
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        long long n;

        // 讀取需要減少到 1 的數字
        scanf("%lld", &n);

        // 計算最小步數並輸出結果
        printf("%d\n", min_steps_to_one(n));
    }

    return 0;
}
