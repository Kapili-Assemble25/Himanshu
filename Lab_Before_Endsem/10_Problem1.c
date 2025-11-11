#include<stdio.h>
#include<string.h>

typedef struct{
	char roll_number[20];
	char name[30];
	char hostel_name[30];
	}Student;
	
int main(){
	Student Stud[4],*ptr;
	char quaryRoll[20];
	int roll;
	
	printf("Enter details of 4 student \n");
	for (int i=0;i<4;i++){
		Stud[i];
		
		printf("Enter Name ");
		getchar();
		scanf("%[^\n]",Stud[i].name);
		
		printf("Enter Roll Number ");
		getchar();
		scanf("%[^\n]",Stud[i].roll_number);
		
		printf("Enter Hostel name ");
		getchar();
		scanf("%[^\n]",Stud[i].hostel_name);
		getchar();
		printf("\n");
		}
	printf("Enter roll number to search ");
	scanf("%[^\n]",quaryRoll);
	getchar();
	int found=0;
	for (int i=0;i<4;i++){
		ptr=&Stud[i];
		if( (strcmp(ptr->roll_number,quaryRoll)==0)){
			found=i+1;
			if((int)quaryRoll[strlen(quaryRoll)-3]==0){
				printf("Student with roll %s is from Msc(Mathamatics) \n",quaryRoll);
				
				break ;
				}
			else{
				printf("Student with roll %s from is Msc(M&C) \n",quaryRoll);
				break ;
				}
			}
		}
	if(!found)
	printf("Student with roll number %s not found.\n",quaryRoll);
	return 0;
	}
	
