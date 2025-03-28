#include <stdio.h>

int main() {
    unsigned int num;
    int n;
    scanf("%u", &num);
    scanf("%d", &n);
    num |= (1 << n);
    printf("%u\n", num);

    return 0;
}