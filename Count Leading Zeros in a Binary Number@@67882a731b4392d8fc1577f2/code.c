#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;
    scanf("%u", &num);
    for (int i = 31; i >= 0; i--) {
        if ((num & (1 << i)) == 0) {
            count++;
        } else {
            break; 
        }
    }
    printf("%d\n", count);

    return 0;
}