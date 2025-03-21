#include <stdio.h>
#include <ctype.h>  // For checking character types

int main() {
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The character is a vowel.\n");
        } else {
            printf("Vowel1.\n");
        }
    } else if (isdigit(ch)) 
        printf("digit.\n");
    } else {
    
        printf("consonant.\n");
    }

    return 0;
}
