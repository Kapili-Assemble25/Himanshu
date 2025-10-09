#include<stdio.h>
int main(){
    int a,c;
    A:
    {
    printf("Enter a positive integer ");
    scanf("%d",&a);
    printf("Chose any one \n 1) Check if the input number is prime.\n2) Check if the input number is an Armstrong number. Print Yes or No.\n3) Exit\n");
    scanf("%d",&c);
    }
    int p=0;
    int sum=0,b=a,rem;
    
    switch (c){
        case 1:
        for(int i=1;i<=a;i++){
            if( a%i==0)
            p++;
        }
        if(p==2)
        printf("%d is prime\n",a);
        else
        printf("%d is not prime\n",a); 
        goto A;
        case 2:
        while(b>0){
            rem=b%10;
            sum=sum+rem*rem*rem;
            b=b/10;
        }
        if(a==sum)
        printf("%d is aa armstrong number\n",a);
        else
        printf("%d is not an armstrong number\n",a);
        goto A;
        case 3: 
        goto C;
        
    }
    C:
    return 0;
}