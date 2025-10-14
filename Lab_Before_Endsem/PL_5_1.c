#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void WordsnChars (const char *str, int *words, int *chars);

int main(){
    int words,chars;
    char str[300];
    printf("Enter a string ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    WordsnChars(str,&words,&chars);
    printf("Words=%d Chars= %d",words,chars);
    return 0;
}

void WordsnChars (const char *str, int *words, int *chars){
    *words=0,*chars=0;
    char *temp = strdup(str);
    char *tokan = strtok(temp," ");
    while(tokan!='\0'){
        (*words)++;
        for(int i=0;tokan[i];i++){
            (*chars)++;
        }
        tokan=strtok(NULL," ");
    }
    free(temp);
    
}
