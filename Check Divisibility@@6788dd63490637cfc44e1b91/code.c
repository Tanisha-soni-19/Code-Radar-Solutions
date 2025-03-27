#include <stdio.h>

int main() {
    int num;

    // Input: a single integer
    scanf("%d", &num);

    // Check if the number is divisible by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("Divisible\n");
    } else {
        printf("Not Divisible\n");
    }

    return 0;
}