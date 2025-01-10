#include <stdio.h>
#include <stdlib.h>

void convert_section(int value, const char *ntoc, const char *digit, int is_first_section, int *is_zero) {
    int has_output = 0; // 記錄是否輸出過任何內容
    for (int j = 3; j >= 0; j--) { // 千位到個位
        int divisor = 1;
        for (int k = 0; k < j; k++) divisor *= 10; // 計算位數的除數
        int digit_value = value / divisor;
        value %= divisor;

        if (digit_value) {
            if (*is_zero) {
                printf("零");
                *is_zero = 0;
            }
            printf("%c", ntoc[digit_value]);
            if (j > 0) {
                printf("%c", digit[j - 1]);
            }
            has_output = 1;
        } else if (has_output) {
            *is_zero = 1; // 遇到零但前面有輸出
        }
    }
}

int main() {
    char ntoc[10] = {'零','壹','貳','叄','肆','伍','陸','柒','捌','玖'};
    char digit[4] = {'拾','佰','仟'};
    int times;
    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        int v;
        scanf("%d", &v);

        if (v == 0) {
            printf("零\n");
            continue;
        }

        int is_zero = 0; // 記錄是否需要輸出“零”

        // 億位
        int q = v / 100000000;
        if (q) {
            convert_section(q, ntoc, digit, 1, &is_zero);
            printf("億");
        }

        // 萬位
        v %= 100000000;
        q = v / 10000;
        if (q) {
            convert_section(q, ntoc, digit, 0, &is_zero);
            printf("萬");
        }

        // 千位到個位
        v %= 10000;
        if (v) {
            convert_section(v, ntoc, digit, 0, &is_zero);
        }

        printf("\n");
    }

    return 0;
}
