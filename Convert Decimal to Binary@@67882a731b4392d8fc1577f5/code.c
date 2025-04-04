#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); 

    int binary; 
    int i = 0;

    if (num == 0) {
        printf("0");
        return 0;
    }

    while (num > 0) {
        binary[i] = num & 1;  
        num = num >> 1;       
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}