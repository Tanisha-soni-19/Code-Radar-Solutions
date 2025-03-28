#include <stdio.h>

void printPrimesInRange(int a, int b) {
    int count = 0;

    for (int i = a; i <= b; i++) {
        if (i <= 1) {
            continue; 
        }

        int isPrime = 1; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break; 
            }
        }

        if (isPrime) {
            printf("%d ", i); 
            count++;
        }
    }

    if (count == 0) {
        printf("No prime numbers\n");
    } else {
        printf(" %d\n", count);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printPrimesInRange(a, b);

    return 0;
}