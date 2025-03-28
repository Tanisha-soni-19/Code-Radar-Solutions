#include <stdio.h>

int main() {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    if (num1 > num2) {
        printf("True %.2f\n");
    } else {
        printf("False")
    }

    return 0;
}