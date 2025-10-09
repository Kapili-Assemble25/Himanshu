#include<stdio.h>
int main(){
    int dividend , divisor1 , divisor2;
    printf("Enter a divident, first divisor, second divisor");
    scanf("%d %d %d",&dividend,&divisor1,&divisor2);
    printf("%d",dividend%divisor1==0 && dividend%divisor2==0);
    return 0;
}