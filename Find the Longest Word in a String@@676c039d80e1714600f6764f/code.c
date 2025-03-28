#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100
#define MAX_STRING_LENGTH 1000

void findLongestWord(const char *str, char *longestWord) {
    char currentWord[MAX_WORD_LENGTH];
    int maxLength = 0;
    int currentLength = 0;
    for (int i = 0; ; i++) {
        if (isspace(str[i]) || str[i] == '\0') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strncpy(longestWord, currentWord, currentLength);
                longestWord[currentLength] = '\0'; 
            }
            currentLength = 0; 
        } else {
            currentWord[currentLength++] = str[i];
        }
    }
}

int main() {
    char str[MAX_STRING_LENGTH];
    char longestWord[MAX_WORD_LENGTH];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    findLongestWord(str, longestWord);
    if (strlen(longestWord) > 0) {
        printf("%s\n", longestWord);
    } else {
        printf("No words found in the string.\n");
    }

    return 0;
}