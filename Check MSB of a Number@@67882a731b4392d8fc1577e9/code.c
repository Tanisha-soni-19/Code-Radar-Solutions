#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & (1 << 31)) {
        printf("Set\n", num);
    } else {
        printf("Not Set\n", num);
    }

    return 0;
}