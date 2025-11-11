#include<stdio.h>
int countFlips(int a, int b){
	int count=0,num ;
	num=a^b;
	while(num>0){
		if(num%2==1)
			count++;
		num=num>>1;
		}
	return count ;
	}
	

int main(){
	int a,b,flip;
	printf("Enter two integer ");
	scanf("%d%d",&a,&b);
	flip= countFlips(a,b);
	printf("Total flips=%d\n",flip);
	return 0;
	}
