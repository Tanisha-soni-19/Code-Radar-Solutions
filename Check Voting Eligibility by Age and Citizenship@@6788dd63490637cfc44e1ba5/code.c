#include <stdio.h>

int main() {
    int age;         
    int isCitizen; 
    scanf("%d", &age); 
    scanf("%d", &isCitizen); 
    if (age >= 18 && isCitizen == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}