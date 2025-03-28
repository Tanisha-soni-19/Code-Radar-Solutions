#include <stdio.h>

int main() {
    int num, shift, result;
    scanf("%d", &num);
    scanf("%d", &shift);
    result = num << shift;
    printf("%d\n", result);

    return 0;
}