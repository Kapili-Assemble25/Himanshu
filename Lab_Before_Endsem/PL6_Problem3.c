#include<stdio.h>
#include<string.h>
int strcasestr_count(const char *str, const char *sub);

int main(){
    char str[300],sub[20];
    printf("Enter the string ");
    fgets(str,sizeof(str),stdin);
    printf("Enter the sub string ");
    fgets(sub,sizeof(sub),stdin);

    str[strcspn(str, "\n")] = 0;
    sub[strcspn(sub, "\n")] = 0;

    printf("Occurence = %d",strcasestr_count(str,sub));
    return 0;
}

int strcasestr_count(const char *str, const char *sub){
    char *temp1=str , temp2[20];
    int p=0;
    strcpy(temp2,sub);

    while((temp1= strstr(temp1, temp2)) != NULL) {
        p++;
        temp1+= strlen(temp2);
    }
    return p;
}
