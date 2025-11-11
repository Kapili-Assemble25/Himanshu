#include<stdio.h>

int main(){
	int n;
	printf("Enter a integer ");
	scanf("%d",&n);
	int i=1,p=0;
	while(n>=i){
		if(i==n){
			printf("%d is a power of 2\n",n);
			p=1;
			i=i<<1;
			break;
			}
		i=i<<1;
		}
	if(p!=1){
		printf("%d is not a power of 2\n",n);
		}
		return 0;
		}
