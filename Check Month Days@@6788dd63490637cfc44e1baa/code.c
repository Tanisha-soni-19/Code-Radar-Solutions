#include <stdio.h>

int main() {
    int month;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    scanf("%d", &month); 
    if (month < 1 || month > 12) {
        printf("Invalid\n");
    } else {
        printf(" %d\n", month, daysInMonth[month]);
    }

    return 0; 
}