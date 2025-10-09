#include<stdio.h>

void report(int a){
	int r_no;
	printf("Enter roll number : ");
	scanf("%d",&r_no);

	float sum = 0;
		for(int j = 1; j <= a; j++){
			float temp;
			printf("Enter the marks in quiz %d : ",j);
			scanf("%f",&temp);
			sum += temp;
		}
		float avg = sum / a;

		if(avg <= 3.0){
			printf("Grade of %d is F.\n",r_no);
		}
		else if(avg <= 4.0){
			printf("Grade of %d is DD.\n",r_no);
		}
		else if(avg <= 5.0){
			printf("Grade of %d is CD.\n",r_no);
		}
		else if(avg <= 6.0){
			printf("Grade of %d is CC.\n",r_no);
		}
		else if(avg <= 7.0){
			printf("Grade of %d is BC.\n",r_no);
		}
		else if(avg <= 8.0){
			printf("Grade of %d is BB.\n",r_no);
		}
		else if(avg <= 9.0){
			printf("Grade of %d is AB.\n",r_no);
		}
		else if(avg <= 10.0){
			printf("Grade of %d is AA.\n",r_no);
		}
}

int main(){
	int s_no, q_no;
	printf("Enter the number of students : ");
	scanf("%d",&s_no);
	printf("Enter the number of quizes : ");
	scanf("%d",&q_no);
	for(int i = 1; i <= s_no; i++){
		report(q_no);
	}
	return 0;
}
