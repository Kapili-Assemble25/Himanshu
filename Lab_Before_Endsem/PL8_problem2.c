#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	fp=fopen("data.txt","r");
	if (fp==NULL){
		printf("Couldn't open the file \n");
		exit(1);
		}
	char str[300];
	while(fgets(str,300,fp)!=NULL){
		printf("%s",str);

		}
	fclose(fp);
	return 0;
	}
		
