#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 256 // Maximum number of ASCII characters

char mostFrequentChar(const char *str) {
    int count[MAX_CHAR] = {0}; 
    int maxCount = 0; 
    char result = '\0'; 
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        if (isalpha(ch)) { 
            count[ch]++;
            if (count[ch] > maxCount || (count[ch] == maxCount && ch < result)) {
                maxCount = count[ch];
                result = ch;
            }
        }
    }

    return result;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char mostFrequent = mostFrequentChar(str);
    if (mostFrequent != '\0') {
        printf("%c\n", mostFrequent);
    } else {
        printf("No alphabetic characters found in the string.\n");
    }

    return 0;
}