#include<stdio.h>
#include<stdlib.h>

int main(){
    int row , col;
    

    printf("Enter the row of 2d matix ");
    scanf("%d",&row);
    int **mat=(int *)malloc(row*sizeof(int));

    printf("Enter the col of 2d matrix ");
    scanf("%d",&col);

    for(int i=0;i<row;i++)
        *(mat+i)=(int *)malloc(col*sizeof(int));
    

    if (mat==NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    //printf("%d",sizeof(mat));
    printf("Enter the matirx ");
    for ( int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[i][j]); // or (*(mat+j)+i)
        }
    }

    for ( int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(*(mat+j)+i)); // or *(*(mat+j)+i)
        }
        printf("\n");
    }
    free(mat);
    return 0;

}