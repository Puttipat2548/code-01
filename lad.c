#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[4];
    int c, m, n=98,i;

    fgets(ch, 4, stdin);
    c = atoi(ch);

    if (c == 0 || c > 26 || c < 0) {
        printf("-");
    }else{

        m = c + 96;

        for (i = m; i >= 97; i--) {
            printf("%c", i);
            if (i >= 97 && m != 97) {
                printf("-");
            }
        }

        for (i = n; i <= m; i++) {
            if (i > 98) {
                printf("-");
            }
            printf("%c", i);
        }
    }
    printf("\n");

}