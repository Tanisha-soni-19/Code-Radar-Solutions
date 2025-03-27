#include <stdio.h>

int main() {
    int number, i; 
    int isPrime = 1; 
    scanf("%d", &number); 
    if (number < 2) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break; 
            }
        }
    }
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}