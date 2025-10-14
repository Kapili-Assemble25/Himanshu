#include<stdio.h>
#include<ctype.h>
#include<string.h>


void Longestword(const char *str, char *maxword, int *maxlen);

int main(){
char str[200],max[20];
int length;
printf("Enter a string:\n");
fgets(str, sizeof(str), stdin); // Safer input to work with pointer
Longestword(str, max, &length); // Function call
printf("Word=%s, length=%d", max, length);
return 0;
}

void Longestword(const char *str, char *maxword, int *maxlen){
int i=0,j;
char word [20];
*maxlen=0;

while(str[i] != '\0'){
    while(isspace(str[i]))
        i++; // Skip leading spaces
    j=0;// Initialize the word counter

    while(str[i] != '\0' && !isspace(str[i])){
        word[j++]=str[i++]; // count charaters
    }
    word[j]= '\0';

    if(strlen(word)> *maxlen) {//check if this word ts longest
        *maxlen=strlen(word);
        strcpy(maxword, word);
    }
}
}

