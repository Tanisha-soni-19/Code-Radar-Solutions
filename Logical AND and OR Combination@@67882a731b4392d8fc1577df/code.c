#include <stdio.h>

int main() {
    float num1, num2;
    scanf("%f", &num1);
    scanf("%f", &num2);
    if ((num1 > 0 && num2 < 0) || (num1 == 0 && num2 == 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}