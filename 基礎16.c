#include <stdio.h>
#include <string.h>

int appearNum(const char *s, int p, const char *l); // 函式宣告

int main() {
    char inputS[1000], inputL[1000]; // 假設輸入字串不超過 1000 字元

    // 輸入檢索字串和被檢索字串
    scanf("%s %s", inputS, inputL);
    
    // 呼叫函式並輸出結果
    printf("%d\n", appearNum(inputS, 0, inputL));
    return 0;
}

int appearNum(const char *s, int p, const char *l) {
    int a = 0;

    // 若偏移位置超過被檢索字串長度，回傳 0
    if (p > strlen(l) - strlen(s)) return 0;

    // 比對字串
    for (int i = 0; i < strlen(s); i++) {
        if (l[i + p] == s[i]) {
            continue; // 符合則繼續比對
        } else {
            // 若不符，遞迴呼叫，向右偏移 1 字元
            return a + appearNum(s, p + 1, l);
        }
    }

    // 比對完全符合，計次後遞迴繼續偏移
    a++;
    return a + appearNum(s, p + 1, l);
}
