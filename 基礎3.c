#include <stdio.h>
#include <stdlib.h>

int main() {
    int inputx = 0, inputy = 0;
    while (scanf("%d %d", &inputx, &inputy) != EOF) { 
        if (inputx * inputx + inputy * inputy <= 10000) {//100*100
            printf("inside\n");
        } else {
            printf("outside\n");
        }
    }
    return 0;
}
