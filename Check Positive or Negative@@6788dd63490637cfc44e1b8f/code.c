#include <stdio.h>

int main() {
    int num;

    // Input: a single integer
    scanf("%d", &num);

    // Check if the number is positive, negative or zero
    if (num > 0) {
        printf("positive\n");
    } else if (num < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return 0;
}