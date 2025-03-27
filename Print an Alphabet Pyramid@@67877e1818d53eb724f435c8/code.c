#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = i; j < N; j++) {
            printf(" ");
        }
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j); 
            if (j < i - 1) { 
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
