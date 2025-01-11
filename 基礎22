#include <stdio.h>

int main() {
    int arr[3][3]; // 定義井字棋 3x3 陣列

    // 讀取井字棋陣列
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]); // 每次讀入一行
        // 檢查整排是否相同
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
            printf("True\n");
            return 0;
        }
    }

    // 檢查直行
    for (int x = 0; x < 3; x++) {
        if (arr[0][x] == arr[1][x] && arr[1][x] == arr[2][x]) {
            printf("True\n");
            return 0;
        }
    }

    // 檢查反斜線
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
        printf("True\n");
        return 0;
    }

    // 檢查正斜線
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
        printf("True\n");
        return 0;
    }

    // 沒有找到任何符合的條件
    printf("False\n");
    return 0;
}
