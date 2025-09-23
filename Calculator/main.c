#include<stdio.h>
double a,b;
double addition();
double subtraction();
double multiplication();
double division();
int main(){
	char p;
	printf("Enter first number ");
	scanf("%lf",&a);
	printf("Enter the operation (+,-,*,/) ");
	scanf(" %c",&p);
	printf("Enter second number ");
	scanf("%lf",&b);
switch (p){
	case '+':printf("%.3lf+%.3lf = %.3lf\n",a,b,addition());break;
	case '-':printf("%.3lf-%.3lf = %.3lf\n",a,b,subtraction());break;
	case '*':printf("%.3lf*%.3lf = %.3lf\n",a,b,multiplication());break;
	case '/':
		if(b!=0)
			{
				printf("%.3lf/%.3lf = %.3lf\n",a,b,division());break;
			}
		else
			printf("Error\n");
	}
	return 0;
}
