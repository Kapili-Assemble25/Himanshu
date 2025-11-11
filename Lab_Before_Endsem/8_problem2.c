#include<stdio.h>
#include<stdlib.h>
int main(){
	int input, size =2,count=0; 
	float *arr,f;
	arr=(float *)malloc(size*sizeof(float));
	if(!arr){
		printf("Memory allocation failed\n");
		return 1;
		}
	printf("ENter integr (enter -1 to stop)\n");
	
	while(1){
		scanf("%d",&input);
		if(input==-1)
		break;
		if(count ==size){
		arr=(float *)realloc(arr,(2*size)*sizeof(float));
		}
		arr[count++]=input;
	}
	for (int i=0;i<count;i++)
		printf("%.2f \t",arr[i]);
	free(arr);
	return 0;
	}
