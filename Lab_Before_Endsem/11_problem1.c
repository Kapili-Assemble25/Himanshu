#include<stdio.h>

int main(){
	FILE *fp ;
	fp = fopen("data.txt","r");
	if (fp == NULL) {
        	perror("Error opening file");
        	return 1;
    	}
	long i,pos;
	fseek(fp,0,2);
	pos=ftell(fp);
	for(i=pos-1;i>=0;i--){
		fseek(fp,i,0);
		char ch;
		ch=fgetc(fp);
		printf("%c",ch);
		}
	fclose(fp);
	return 0;
	}
