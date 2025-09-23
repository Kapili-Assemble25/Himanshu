#include<stdio.h>
 fact(int a){
    int mul=1;
    for(int i=a;i>0;i--){
        mul*=i;
    }
    return mul;
}
int main(){
    int a;
    printf("Enter a number to compute Eular's number ");
    scanf("%d",&a);
    float sum =0;
    for (int i =0;i<=a;i++){
        sum+=(1/fact(i));
    }
    printf("%f is the required Eular's number ",sum);
 return 0;
}