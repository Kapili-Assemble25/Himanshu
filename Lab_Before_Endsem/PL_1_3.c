#include<stdio.h>
#include<stdlib.h>

int calculateSum(int *arr, int size);

int main(){
    int size;

    printf("Enter the size of the array ");
    scanf("%d",&size);

    int *arr=(int *)malloc(size*sizeof(int));
   
    if(arr==NULL){
        printf("Allocation failed");
        exit(1);
    }

    printf("Enter the elemtns of array ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);}
    printf("Sum is %d",calculateSum(arr,size));

    free(arr);
    return 0;
}

int calculateSum(int *arr, int size){
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=arr[i];
    return sum;
}