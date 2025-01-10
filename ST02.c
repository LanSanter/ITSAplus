#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char text[100];;
    while(scanf("%s", text) != EOF) {
        int acc = 0;
        int len = strlen(text);

        for(int i=0; i<len; i++ ){
            int bit = (int)(text[i]-'A'+1);
             acc = acc * 26 + bit;
        }
        
        printf("%d\n", acc);
    }




	return 0;
}
