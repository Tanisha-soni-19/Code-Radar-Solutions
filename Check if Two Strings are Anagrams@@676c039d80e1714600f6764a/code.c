#include <stdio.h>
#include <string.h>
#include <ctype.h>
int areAnagrams(const char *str1, const char *str2) {
    int count[MAX_CHAR] = {0}; 
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++) {
        count[tolower(str1[i])]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        count[tolower(str2[i])]--;
    }
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 
    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}