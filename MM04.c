#include <stdio.h>

// 函數：檢查數字是否為完全數
const char* is_perfect_number(long long p) {
    if (p <= 1) {
        return "nonperfect"; // 小於等於1的數字不可能是完全數
    }

    long long sum = 1; // 1 是所有大於1的數字的適當因數
    for (long long i = 2; i * i <= p; i++) { // 循環從2到平方根p
        if (p % i == 0) { // 如果i是p的因數
            sum += i; // 加入因數i
            if (i != p / i) { // 如果因數不相同，加入另一個因數
                sum += p / i;
            }
        }
    }

    if (sum == p) {
        return "perfect"; // 如果因數和等於p，則為完全數
    } else {
        return "nonperfect"; // 否則，不是完全數
    }
}

int main() {
    int test_cases;

    // 讀取測試用例數量
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        long long p;

        // 讀取要檢查的數字
        scanf("%lld", &p);

        // 判斷該數是否為完全數
        printf("%s\n", is_perfect_number(p));
    }

    return 0;
}
