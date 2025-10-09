#include<stdio.h>
int HCF(int a,int b){
    for (int i=a;i>0;i--){
        if(b%a==0){
            return a;
            break;
        }
    }
}
int LCM(int a,int b){
    for (int i=1;;i++){
        if(i%b==0&&i%a==0){
            return i;
            break;
        }
    }
}
int main(){
    int a,b;
    printf("Enter two integers ");
    scanf("%d %d",&a,&b);
    if(a>0&&b>0)
    printf("HCF=%d and LCM= %d",HCF(a,b),LCM(a,b));
    else
    printf("Enter valid integer ");
    return 0;
}