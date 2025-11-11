#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_RANGE 256

void checkAnagram(char str1[], char str2[]);

int main() {
    char str1[300], str2[300];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    checkAnagram(str1, str2);

    return 0;
}

void checkAnagram(char str1[], char str2[]) {
    int count1[CHAR_RANGE] = {0};
    int count2[CHAR_RANGE] = {0};
    int i;

  
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

   
    for (i = 0; str1[i] != '\0'; i++) {
        if (!isspace(str1[i])) 
            count1[tolower(str1[i])]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (!isspace(str2[i])) 
            count2[tolower(str2[i])]++;
    }

   
    for (i = 0; i < CHAR_RANGE; i++) {
        if (count1[i] != count2[i]) {
            printf("Not an anagram\n");
            return;
        }
    }

    printf("Anagram\n");
}

