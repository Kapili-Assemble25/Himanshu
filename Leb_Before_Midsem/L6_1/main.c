#include<stdio.h>
#include<unistd.h>
#include"myheader.h"
int main(){
    extern int z;
    
    int one=0,two=0,three=0,four=0,five=0,six=0;
    for(int i =1;i<=60;i++){
        sleep(1);
        if(roll_die()==1)
        one++;
        else if(roll_die()==2)
        two++;
        else if(roll_die()==3)
        three++;
        else if(roll_die()==4)
        four++;
        else if(roll_die()==5)
        five++;
        else if(roll_die()==6)
        six++;
    }
    printf("One = %d Two = %d Three = %d Four = %d Five = %d Six = %d",one,two,three,four,five,six);
    return 0;
}