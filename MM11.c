#include <stdio.h>
#include <limits.h>
#include <math.h>

// 函數：計算兩個立方體的交集體積
int intersection_volume(int x1, int y1, int z1, int d1, int x2, int y2, int z2, int d2) {
    int x_overlap = fmax(0, fmin(x1 + d1, x2 + d2) - fmax(x1, x2)); // 計算 x 軸重疊範圍
    int y_overlap = fmax(0, fmin(y1 + d1, y2 + d2) - fmax(y1, y2)); // 計算 y 軸重疊範圍
    int z_overlap = fmax(0, fmin(z1 + d1, z2 + d2) - fmax(z1, z2)); // 計算 z 軸重疊範圍

    return x_overlap * y_overlap * z_overlap; // 返回交集體積
}

// 函數：計算多個立方體的交集體積
int compute_total_intersection_volume(int n, int cubes[][4]) {
    int x_min = INT_MIN, y_min = INT_MIN, z_min = INT_MIN; // 初始化最小邊界
    int x_max = INT_MAX, y_max = INT_MAX, z_max = INT_MAX; // 初始化最大邊界

    for (int i = 0; i < n; i++) {
        int x = cubes[i][0], y = cubes[i][1], z = cubes[i][2], d = cubes[i][3];

        x_min = fmax(x_min, x);       // 更新 x 軸最小邊界
        y_min = fmax(y_min, y);       // 更新 y 軸最小邊界
        z_min = fmax(z_min, z);       // 更新 z 軸最小邊界

        x_max = fmin(x_max, x + d);   // 更新 x 軸最大邊界
        y_max = fmin(y_max, y + d);   // 更新 y 軸最大邊界
        z_max = fmin(z_max, z + d);   // 更新 z 軸最大邊界
    }

    int x_overlap = fmax(0, x_max - x_min); // 計算 x 軸重疊範圍
    int y_overlap = fmax(0, y_max - y_min); // 計算 y 軸重疊範圍
    int z_overlap = fmax(0, z_max - z_min); // 計算 z 軸重疊範圍

    return x_overlap * y_overlap * z_overlap; // 返回交集體積
}

int main() {
    while (1) {
        int n;
        scanf("%d", &n); // 讀取立方體數量

        if (n == 0) {
            break; // 如果輸入為 0，結束程序
        }

        int cubes[n][4];

        for (int i = 0; i < n; i++) {
            scanf("%d %d %d %d", &cubes[i][0], &cubes[i][1], &cubes[i][2], &cubes[i][3]); // 讀取每個立方體的座標和邊長
        }

        int volume = compute_total_intersection_volume(n, cubes); // 計算總交集體積
        printf("%d\n", volume); // 輸出結果
    }

    return 0;
}
