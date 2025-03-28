#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int bitValue = (num >> n) & 1;
    printf(" %d\n",bitValue);

    return 0;
}