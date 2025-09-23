#include<stdlib.h>
#include<time.h>

int roll_die(){
    srand(time(0));
    int z=rand()%6+1;
    return z;
}