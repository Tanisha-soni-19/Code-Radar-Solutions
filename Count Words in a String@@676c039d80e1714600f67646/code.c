#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countWords(const char *str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (*str == ' ') {
            inWord = false; 
        } else {
            if (!inWord) {
                count++; 
                inWord = true; 
            }
        }
        str++; 
    }

    return count;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0;

    int wordCount = countWords(str);
    printf("%d\n", wordCount);

    return 0;
}