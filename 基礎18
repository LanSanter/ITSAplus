#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT 1000

typedef struct {
    char key;
    char value;
} KeyValue;

int main() {
    char input[MAX_INPUT];
    KeyValue keyMap[] = {
        {' ', ' '}, {'!', '@'}, {'"', '"'}, {'#', '$'},
        {'$', '%'}, {'%', '^'}, {'&', '*'}, {'\'', '\''},
        {'(', ')'}, {')', '_'}, {'*', '('}, {'+', '+'},
        {',', '.'}, {'-', '='}, {'.', '/'}, {'/', '/'},
        {'0', '-'}, {'1', '2'}, {'2', '3'}, {'3', '4'},
        {'4', '5'}, {'5', '6'}, {'6', '7'}, {'7', '8'},
        {'8', '9'}, {'9', '0'}, {':', '"'}, {';', '\''},
        {'<', '>'}, {'=', '='}, {'>', '?'}, {'?', '?'},
        {'@', '#'}, {'a', 's'}, {'b', 'n'}, {'c', 'v'},
        {'d', 'f'}, {'e', 'r'}, {'f', 'g'}, {'h', 'j'},
        {'g', 'h'}, {'i', 'o'}, {'j', 'k'}, {'k', 'l'},
        {'l', ';'}, {'m', ','}, {'n', 'm'}, {'o', 'p'},
        {'p', '['}, {'q', 'w'}, {'r', 't'}, {'s', 'd'},
        {'t', 'y'}, {'u', 'i'}, {'v', 'b'}, {'w', 'e'},
        {'x', 'c'}, {'y', 'u'}, {'z', 'x'}, {'[', ']'},
        {'\\', '\\'}, {']', '\\'}, {'^', '&'}, {'_', '='},
        {'`', '1'}, {'{', '}'}, {'|', '|'}, {'}', '|'},
        {'~', '!'}
    };
    int keyMapSize = sizeof(keyMap) / sizeof(keyMap[0]);

    // 讀取輸入字串
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = 0; // 去除換行符

    // 將輸入字串轉為小寫
    for (int i = 0; i < strlen(input); i++) {
        input[i] = tolower(input[i]);
    }

    // 遍歷輸入字串並映射到對應字符
    for (int i = 0; i < strlen(input); i++) {
        for (int j = 0; j < keyMapSize; j++) {
            if (input[i] == keyMap[j].key) {
                putchar(keyMap[j].value);
                break;
            }
        }
    }

    // 換行
    putchar('\n');
    return 0;
}
