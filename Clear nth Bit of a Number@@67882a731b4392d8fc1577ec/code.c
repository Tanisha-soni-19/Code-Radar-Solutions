#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    num = num & ~(1 << n);
    printf("%d\n");

    return 0;
}