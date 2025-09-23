#include<stdio.h>
long int bi(long int a ){
    long int sum=0;
    int i=1,rem;
    while(a>0){
        rem =a%2;
        a=a/2;
        sum=sum+rem*i;
        i=i*10;
    }
    return sum;
}
int main(){
    long int a;
    printf("Enter a integer ");
    scanf("%ld",&a);
    printf("The binary equvalent of %ld is %ld\n",a,bi(a));
    return 0;
}