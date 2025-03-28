#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & 1) {
        printf("Set: %d\n", num);
    } else {
        printf("Not set %d\n", num);
    }

    return 0;
}