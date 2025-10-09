#include<stdio.h>

void swap(float *n1, float *n2);

int main(){
    float n1,n2;
    printf("Enter two numbers ");
    scanf("%f %f",&n1,&n2);

    printf("Before swap\tFirst = %.2f : second = %.2f\n",n1,n2);
    swap(&n1,&n2);
    printf("After swap\tFirst = %.2f : second = %.2f",n1,n2);

    return 0;

}

void swap(float *n1, float *n2){
    float temp;
    temp=*n1;*n1=*n2;*n2=temp;
}