#include<stdio.h>
int main(){
    int a;
    printf("Enter a three digit number");
    scanf("%d",&a);
    int sum=0;
    sum=(int)(a-a%100)/100+100*(a%10)+(a%100-a%10);
    printf("%d",sum);
    return 0;
}