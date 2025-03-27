#include <stdio.h>

int main() {
    float radius; 
    float area;   
    const float PI = 3.14; 
    scanf("%f", &radius);
    area = 3.14* radius * radius;
    printf("Area: %.2f\n", radius, area);

    return 0;
}