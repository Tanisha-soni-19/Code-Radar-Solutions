#include <stdio.h>
#include <string.h>

int countCharacter(const char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[1000];
    char ch;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    scanf(" %c", &ch); 
    int count = countCharacter(str, ch);
    
    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}