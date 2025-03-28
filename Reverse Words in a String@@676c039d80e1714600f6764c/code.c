#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *word_start = NULL;
    char *temp = str; 
    while (*temp) {
        if ((word_start == NULL) && !isspace(*temp)) {
            word_start = temp;
        }
        else if (word_start && (isspace(*temp) || *(temp + 1) == '\0')) {
            if (isspace(*temp)) {
                reverseString(word_start, temp - 1);
            } else {
                reverseString(word_start, temp); 
            }
            word_start = NULL; 
        }
        temp++;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    reverseWords(str);
    printf("%s\n", str);

    return 0;
}