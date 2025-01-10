#include <stdio.h>
#include <limits.h>
#include <math.h>

// Function to find the intersection volume of two cubes
int intersection_volume(int x1, int y1, int z1, int d1, int x2, int y2, int z2, int d2) {
    int x_overlap = fmax(0, fmin(x1 + d1, x2 + d2) - fmax(x1, x2));
    int y_overlap = fmax(0, fmin(y1 + d1, y2 + d2) - fmax(y1, y2));
    int z_overlap = fmax(0, fmin(z1 + d1, z2 + d2) - fmax(z1, z2));

    return x_overlap * y_overlap * z_overlap;
}

// Function to compute the intersection volume of multiple cubes
int compute_total_intersection_volume(int n, int cubes[][4]) {
    int x_min = INT_MIN, y_min = INT_MIN, z_min = INT_MIN;
    int x_max = INT_MAX, y_max = INT_MAX, z_max = INT_MAX;

    for (int i = 0; i < n; i++) {
        int x = cubes[i][0], y = cubes[i][1], z = cubes[i][2], d = cubes[i][3];

        x_min = fmax(x_min, x);
        y_min = fmax(y_min, y);
        z_min = fmax(z_min, z);

        x_max = fmin(x_max, x + d);
        y_max = fmin(y_max, y + d);
        z_max = fmin(z_max, z + d);
    }

    int x_overlap = fmax(0, x_max - x_min);
    int y_overlap = fmax(0, y_max - y_min);
    int z_overlap = fmax(0, z_max - z_min);

    return x_overlap * y_overlap * z_overlap;
}

int main() {
    while (1) {
        int n;
        scanf("%d", &n);


        if (n == 0) {
            break;
        }

        int cubes[n][4];

        for (int i = 0; i < n; i++) {
            scanf("%d %d %d %d", &cubes[i][0], &cubes[i][1], &cubes[i][2], &cubes[i][3]);
        }

        int volume = compute_total_intersection_volume(n, cubes);
        printf("%d\n", volume);
    }

    return 0;
}

