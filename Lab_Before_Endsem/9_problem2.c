#include<stdio.h>
#include<string.h>
#include<ctype.h>

int checkPalindrome(char str[]);

int main(){
	char str[300];
	
	printf("Enter a string ");
	fgets(str,sizeof(str),stdin);
	
	printf("%d\n",checkPalindrome(str));
	
	return 0;
	}
	
int checkPalindrome(char str[]){
	char temp[300];
	strcpy(temp,str);
	int i ;
	int n;
	n=strlen(str);
	for(i=0;i<n-1;i++){
		temp[i]=str[n-i-2];
		}
	n=strcmp(temp,str);
	if(n==0)
		return 1;
	else
		return 0;
	}
