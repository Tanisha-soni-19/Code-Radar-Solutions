#include <stdio.h>

int main() {
    float num1, num2; 
    float product;
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;

    // Print the product
    printf("Product: %.2f\n", product);

    return 0;
}