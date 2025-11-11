#include<stdio.h>

int main(){
	int n ,k,m;
	printf("Enter the value of n,k ");
	scanf("%d%d",&n,&k);
	m=n;
	m=m>>k;
	m=m<<k;
	printf("%d",n-m);
	return 0;
	}
