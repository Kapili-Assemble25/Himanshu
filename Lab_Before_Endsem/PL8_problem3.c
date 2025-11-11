#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	FILE *fp;
	int lines=0,spaces=0;
	fp=fopen("data.txt","r");
	if (fp==NULL){
		printf("Couldn't open the file \n");
		exit(1);
		}
	char temp[300] ,str[300];
	
	while (fgets(str, sizeof(str), fp) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ')
                spaces++;
        }
        lines++;
    }

	printf("Spaces=%d\tlines=%d\n",spaces,lines);
	return 0;
	}
