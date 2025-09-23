#include<stdio.h>
int main(){
    int h,m,s;
    float total;
    
    printf("Enter hour , minute , second ");
    scanf("%d %d %d",&h,&m,&s);
    total=h*3600+m*60+s;
    printf("Time in second is %d\n",h*3600+m*60+s);
    printf("The percentage of the day is %.2f",total/(24*3600));
    return 0;
}