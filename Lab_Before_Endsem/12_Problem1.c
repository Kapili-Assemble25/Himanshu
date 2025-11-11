#include<stdio.h>

int main(){
	int n,xorArr=0,xorAll=0;
	printf("ENter the size of the array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array element (0-%d)\n",n);
	for (int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		if(arr[i]>n||arr[i]<0)
			break;
		xorArr ^=arr[i];
		}
	for(int i=0;i<=n;i++)
	xorAll^=i;
	
	int missing = xorArr^xorAll;
	
	printf("Missing number is %d :",missing);
	
	
	return 0;
	}
