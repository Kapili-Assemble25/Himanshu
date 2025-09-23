#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int p,a,z;
    printf("Enter a number (>1):");
    scanf("%d",&a);
    printf("Guess a number between 1 and %d:",a);
    scanf("%d",&p);
    z=rand()%a+1;
    if(z==p)
    printf("Congrats! You have won. ");
    else
    printf("Sorry, you lost");
    return 0;
}