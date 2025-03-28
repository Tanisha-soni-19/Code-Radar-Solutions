#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (!(num>0)) {
        printf("True\n");
    } else {
        printf("False");
    }

    return 0;
}