#include <stdio.h>

// 函數：判斷年份是否為閏年
int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 函數：計算星期幾
// 1 = 星期日, 2 = 星期一, ..., 7 = 星期六
int calculate_day_of_week(int year, int month, int day) {
    // 根據 Zeller 同餘公式進行調整
    if (month < 3) {
        month += 12;
        year--;
    }

    int k = year % 100; // 年份的後兩位
    int j = year / 100; // 年份的前兩位

    int day_of_week = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    // 將結果轉換為 1 = 星期日, ..., 7 = 星期六
    if (day_of_week < 0)
        day_of_week += 7;

    return (day_of_week + 6) % 7 + 1;
}

int main() {
    int test_cases;

    // 讀取測試用例的數量
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        int year, month, day;

        // 讀取日期輸入
        scanf("%d %d %d", &year, &month, &day);

        // 計算星期幾
        int day_of_week = calculate_day_of_week(year, month, day);

        // 輸出結果
        printf("%d\n", day_of_week);
    }

    return 0;
}
