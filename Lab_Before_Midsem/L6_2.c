#include<stdio.h>
int next_prime(int a);
static int r=0;
int main(){
    int n;
    printf("Enter required number of primes ");
    scanf("%d",&n);
    for (int i=1;;i++){
        if(r<n)
        printf("%d ",next_prime(i));
        else 
        return 0;
    }
}
int next_prime(int a){
    int p=0,b=a;
    for(int i=1;i<=a;i++){
            if( a%i==0)
            p++;
        }
    if(p==2){
        r++;
        return b;
    }
}