#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    for (i = N; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            printf("%c ", 'A' + j - 1); 
        }
        printf("\n");
    }

    return 0;
}