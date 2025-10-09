#include <stdio.h>

int main() {

    char ch;

    while (1) {
 
       printf("Enter a character (Ctrl+D to exit): ");

        if (scanf(" %c", &ch) == EOF) {   
            break;
        }

        if (ch >= '0' && ch <= '9') {
            printf("Digit.\n");
        }

        else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
                 ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            printf("Vowel.\n");
        }

        else {
            printf("Something else.\n");
        }

    }

    return 0;

}
