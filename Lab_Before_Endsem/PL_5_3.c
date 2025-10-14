#include<stdio.h>

void calculate(float op1, float op2, char operator);

int main(){
    float a ,b;
    char c;
    printf("Enter first digit: ");
    scanf("%f",&a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c",&c);
    printf("Enter second number: ");
    scanf("%f",&b);
    calculate(a,b,c);
    return 0;
}

void calculate(float op1, float op2, char operator){
    switch (operator) {
        case '+':
            printf("Result: %f",op1+op2);
            break;
        
            case '-':
            printf("Result: %f",op1-op2);
            break;

        case '/':
            if(op2==0){
                printf("Zero divison error");
                break;
            }
            else{
                printf("Result: %f",op1/op2);
                break;
            }
        
        case '%':
            if((int)op2==0){
                printf("Zero modulo error");
                break;
            }
            else{
                printf("Result: %f",(int)op1/(int)op2);
                break;
            }
        default:
            printf("No valid operation");
            break;

    }

}