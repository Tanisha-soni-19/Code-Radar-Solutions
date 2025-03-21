#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
    } else {
        if (marks >= 90) {
            printf(" A\n");
        } else if (marks >= 80) {
            printf(" B\n");
        } else if (marks >= 70) {
            printf(" C\n");
        } else if (marks >= 60) {
            printf(" D\n");
        } else {
            printf(" F\n");
        }
    }

    return 0;
}
