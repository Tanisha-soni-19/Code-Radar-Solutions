#include <stdio.h>

int main() {
    int num1, num2; 
    scanf("%d", &num1); 
    scanf("%d", &num2); 
    if (num1 == num2) {
        printf("Equal.\n");
    } else if (num1 > num2) {
        printf("First: %d\n", num1);
    } else {
        printf("Second: %d\n", num2);
    }

    return 0;
}