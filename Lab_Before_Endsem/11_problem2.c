#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int roll;
	char name[50];
	float marks;
	}Student;
	
int main(){
	FILE *fp;
	fp = fopen("students.dat","w+");
	if (fp == NULL) {
        	perror("Error opening file");
        	return 1;
    	}
	Student *ptr,stud[5];
	
	for(int i=0;i<2;i++){
		
		scanf("%d",&stud[i].roll);getchar();
		scanf("%[^\n]",stud[i].name);getchar();
		scanf("%f",&stud[i].marks);getchar();
		ptr=&stud[i];
		fwrite(ptr,sizeof(Student),1,fp);
		}
	fseek(fp,0,0);
	
	
	for(int i=0;i<2;i++){
		fread(ptr,sizeof(Student),1,fp);
		printf("%d\n",ptr->roll);
		printf("%s\n",ptr->name);
		printf("%.2f\n",ptr->marks);
		}
	
	fclose(fp);
	return 0;
	}
