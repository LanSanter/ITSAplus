#include <stdio.h>
#include <string.h>

int main() {
    char input[1000], output[1000]; // 假設輸入字串不超過 1000 字元
    int a = 1; // 布爾值，1 表示為回文，0 表示不是回文

    scanf("%s", input); // 輸入字串
    int length = strlen(input);

    // 將字串逆序傳到 output
    for (int i = length - 1; i >= 0; i--) {
        output[length - 1 - i] = input[i];
    }
    output[length] = '\0'; // 加上字串結尾符號

    // 比較是否為回文
    for (int j = 0; j < length; j++) {
        if (input[j] != output[j]) { // 發現有異即時跳出
            a = 0;
            break;
        }
    }

    // 輸出結果
    if (a) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
