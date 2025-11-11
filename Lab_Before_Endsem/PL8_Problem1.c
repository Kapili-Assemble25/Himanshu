#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	fp=fopen("data.txt","w");
	if (fp==NULL){
		printf("Couldn't open the file \n");
		exit(1);
		}
	printf("Enter five lines \n");
	for (int i=1;i<=5;i++){
		char s[300];
		fgets(s,300,stdin);
		fputs(s,fp);
		}
	fclose(fp);
	return 0;
	}
