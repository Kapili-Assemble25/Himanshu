#include<stdio.h>
void genericSwap(void *a,void *b,char type){
switch (type){
		case 'i':
			int i;
			i=*(int *)a;*(int *)a=*(int *)b;*(int *)b=i;
			break;
		case 'c':
			char i1;  
			i1=*(char *)a;*(char *)a=*(char *)b;*(char *)b=i1;
			break;
		case 'f':
			float i2;
			i2=*(float *)a;*(float *)a=*(float *)b;*(float *)b=i2;
			break;
		case 'd':
			double i3;
			i=*(double *)a;*(double *)a=*(double *)b;*(double *)b=i3;
			break;
		default:
			printf("Invalid data type");
			}
}
	

int main(){
	char c;
	printf("Enter the data type .\n'i' for integer\n'c' for char\n'f' for float\n'd' for double\n" );
	scanf("%c",&c);
	switch (c){
		case 'i':int a,b;
			printf("Enter two integer ");
			scanf("%d %d",&a,&b);
			printf("Before swap x=%d y=%d\n",a,b);
			genericSwap( &a,&b,c);
			printf("After swap x=%d y=%d\n",a,b);
			break;
		case 'c':char c1,c2;
			printf("Enter two charector ");
			scanf(" %c %c",&c1,&c2);
			printf("Before swap x=%c y=%c\n",c1,c2);
			genericSwap( &c1,&c2,c);
			printf("After swap x=%c y=%c\n",c1,c2);
			break;
		case 'f':
			float f1,f2;
			printf("Enter two floating number ");
			scanf("%f %f",&f1,&f2);
			printf("Before swap x=%f y=%f\n",f1,f2);
			genericSwap( &f1,&f2,c);
			printf("After swap x=%f y=%f\n",f1,f2);
			break;
		case 'd':
			double d1,d2;
			printf("Enter two double ");
			scanf("%lf %lf",&d1,&d2);
			printf("Before swap x=%lf y=%lf\n",d1,d2);
			genericSwap( &d1,&d2,c);
			printf("After swap x=%lf y=%lf\n",d1,d2);
			break;
		default:
			printf("Invalid data type");
		}
	return 0;
	}
	
