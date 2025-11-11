#include<stdio.h>
#include<string.h>

typedef struct{
	char name[30];
	int roll_number,age;
	}Student;
	
int main(){
	Student Stud[5],*ptr;
	for (int i=0;i<5;i++){
		ptr=&Stud[i];
		
		printf("\nDetails of Student %d\n",i+1);
		
		printf("Enter Name ");
		getchar();
		scanf("%[^\n]",ptr->name);
		
		
		printf("Enter Roll Number ");
		scanf("%d",&ptr->roll_number);
		
		printf("Enter Age ");
		scanf("%d",&ptr->age);
		
		printf("\n");
		
		}
		
	for (int i=0;i<5;i++){
		ptr=&Stud[i];
		printf("\nStudent %d\n",i+1);
		printf("Name: %s\n",ptr->name);
		printf("Roll Number%d\n",ptr->roll_number);
		printf("Age%d\n",ptr->age);
		
		}
	return 0;
	}
