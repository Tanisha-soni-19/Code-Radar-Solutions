#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;
    scanf("%u", &num);
    if (num == 0) {
        printf("The number is zero, which has no trailing zeros.\n");
        return 0; 
    }
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }
    printf("%d\n", count);

    return 0;
}