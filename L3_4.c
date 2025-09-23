#include<stdio.h>
int main(){
    int sa,total;
    printf("Enter basic salary ");
    scanf("%d",&sa);
    if(1<=sa && sa<=4000)
        printf("Total salary is %.2f ",sa+.1*sa+.5*sa);
    if(4001<=sa && sa<=8000)
        printf("Total salary is %.2f ",sa+.2*sa+.6*sa);
    if(8001<=sa && sa<12000)
        printf("Total salary is %.2f ",sa+.25*sa+.7*sa);
    if(12001<=sa )
        printf("Total salary is %.2f ",sa+.3*sa+.8*sa);


    
    return 0;
}