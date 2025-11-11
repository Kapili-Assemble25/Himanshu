#include <stdio.h>

char *mystrstr(char *str, char *sub) {
    if (!*sub)  // if sub is an empty string
        return str;

    for (char *p = str; *p; p++) {
        char *p1 = p;
        char *p2 = sub;

        // Compare characters one by one
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        // If we reached end of sub, match found
        if (!*p2)
            return p;
    }

    // If not found, return NULL (or -1 as per requirement)
    return (char *)-1;
}

int main() {
    char str[100], sub[50];
    printf("Enter main string: ");
    gets(str);
    printf("Enter substring: ");
    gets(sub);

    char *result = mystrstr(str, sub);

    if (result == (char *)-1)
        printf("Substring not found.\n");
    else
        printf("Substring found at position: %ld\n", result - str);

    return 0;
}
