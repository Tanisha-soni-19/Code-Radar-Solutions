#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        for (j = i; j < N; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}