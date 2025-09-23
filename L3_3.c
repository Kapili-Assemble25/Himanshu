#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    for (int i=a;a>0;a--){
        if(b%a==0){
            printf("%d",a);
            break;
        }
    }
    return 0;
}