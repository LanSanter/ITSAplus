#include <stdio.h>
#include <string.h>

int main() {
    char in[1000]; // 假設輸入長度不超過 1000
    int p;

    // 讀取字串和位移量
    fgets(in, sizeof(in), stdin);
    in[strcspn(in, "\n")] = '\0'; // 去除換行符
    scanf("%d", &p);

    for (int i = 0; i < strlen(in); i++) {
        if (in[i] >= 'A' && in[i] <= 'Z') { // 大寫字母處理
            in[i] = (char)(((in[i] - 'A' + p) % 26) + 'A');
        } else if (in[i] >= 'a' && in[i] <= 'z') { // 小寫字母處理
            in[i] = (char)(((in[i] - 'a' + p) % 26) + 'a');
        } else if (in[i] >= '0' && in[i] <= '9') { // 數字處理
            in[i] = (char)(((in[i] - '0' + p) % 10) + '0');
        }
    }

    // 輸出加密後的字串
    printf("%s\n", in);

    return 0;
}
