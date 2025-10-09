#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int z= rand();
    printf("%d",(z%6 +1));
    return 0;
}