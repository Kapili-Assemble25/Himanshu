#include<stdio.h>
#include<math.h>

typedef struct{
	float x,y;
	}Point;
	
int main(){
	int n;
	printf("Enter the number of point ");
	scanf("%d",&n);
	
	Point points[n],*temp;
	
	for( int i=0;i<n;i++){
		
		printf("Point %d(x,y): ",i+1);
		scanf("%f %f",&points[i].x,&points[i].y);
		}
	
	for(int i=1;i<n;i++){
		float temp,pow1,pow2,sum;
		printf("Distance from first point (%.2f,%.2f): to point (%.2f,%.2f) is ",points[0].x,points[0].y,points[i].x,points[i].y);
		pow1=pow((points[0].x-points[i].x),2);
		pow2=pow((points[0].y-points[i].y),2);
		sum=(pow1+pow2);
		temp=sqrt(sum);
		printf("%.2f\n",temp);
		}
		return 0;
		}
