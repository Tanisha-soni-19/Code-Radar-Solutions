#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & 1) {
        printf("Set\n", num);
    } else {
        printf("Not set\n", num);
    }

    return 0;
}