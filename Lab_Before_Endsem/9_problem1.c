#include<stdio.h>
#include<string.h>
#include<ctype.h>

void countCharacters(char str[], int *digits, int *alpha, int *space, int *spl);

int main(){
	char str[300];
	int digit,alpha,space,spl;
	
	printf("Enter a string ");
	fgets(str,sizeof(str),stdin);
	
	countCharacters(str,&digit,&alpha,&space,&spl);
	printf("Digits = %d Alphabets = %d Spaces = %d Special = %d \n",digit,alpha,space-1,spl);
	return 0;
	}

void countCharacters(char str[], int *digits, int *alpha, int *space, int *spl){
	int i=0;
	*digits=0,*alpha=0,*space=0,*spl=0;
	while(str[i]!='\0'){
		if(isdigit(str[i]))
			(*digits)++;
		else if(isalpha(str[i]))
			(*alpha)++;
		else if (isspace(str[i]))
			(*space)++;
		else
			(*spl)++;
		i++;
		}
	}
			
