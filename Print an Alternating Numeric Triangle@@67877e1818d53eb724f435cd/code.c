#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int start = i%2;
        for (int j = 0; j <= i; j++) {
                printf("%d ",start);
                start = 1-start;
            
        }
        printf("\n");
    }

    return 0;
}