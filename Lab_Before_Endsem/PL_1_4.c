#include<stdio.h>
#include<stdlib.h>

int main(){
    int size1,size2;

    printf("Enter the size of the first array ");
    scanf("%d",&size1);
    printf("Enter the size of the second  array ");
    scanf("%d",&size2);


    int *arr1=(int *)malloc(size1*sizeof(int));
    int *arr2=(int *)malloc(size2*sizeof(int));
   
    if(arr1==NULL || arr2 ==NULL){
        printf("Allocation failed");
        exit(1);
    }

    printf("Enter the elemtns of first array ");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);}

    printf("Enter the elemtns of second array ");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);}

    // int *arr=(int *)malloc(size1*sizeof(int));
    // for(int i =0;i<size1;i++){
    //     arr[i]=arr1[i];
    //     printf("%d      ",arr[i]);
    // 
    int *arr=(int *)malloc((size1+size2)*sizeof(int));
    

    for ( int i=0;i<size2+size1;i++){
        if(i<size1){
            arr[i]=arr1[i];
        }
        else{
            arr[i]=arr2[i-size1];
        }
        printf("%d ",arr[i]); 
    }
    free(arr1);
    free(arr2);
    free(arr);
    return 0;
}