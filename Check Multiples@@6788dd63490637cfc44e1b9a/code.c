#include <stdio.h>

int main() {
    int number, divisor;
    scanf("%d %d", &number, &divisor);
    if (number % divisor == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}