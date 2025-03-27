#include <stdio.h>

int main() {
    int number; 
    scanf("%d", &number); 
    if (number % 3 == 0 && number % 5 == 0) {
        printf("Divisible by both\n");
    } else if (number % 3 == 0) {
        printf("Divisible by 3\n");
    } else if (number % 5 == 0) {
        printf("Divisible by 5\n");
    } else {
        printf("Not divisible\n");
    }

    return 0;
}