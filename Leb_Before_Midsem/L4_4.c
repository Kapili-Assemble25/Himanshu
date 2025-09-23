#include<stdio.h>
int main(){
    int iVal,n;
    float fVal,a,b;
    printf("ENter an integer :");
    scanf("%d",&iVal);
    printf("Enter a float :");
    scanf("%f",&fVal);
    printf("Predict for: int + float\nEnter predicted type code (1=int, 2=float, 3=double)");
    scanf("%d",&n);
    printf("Enter predicted value: ");
    scanf("%f",&a);
    if(a==(iVal+fVal)){
        printf("Actual type: 2 (float), Actual value: %f -> MATCH\n",iVal+fVal);
    }
    else
    printf("Actual type: 2 (float), Actual value: %f ->Miss MATCH\n",iVal+fVal);

    printf("Predict for: int / float\nEnter predicted type code (1=int, 2=float, 3=double)");
    scanf("%d",&n);
    printf("Enter predicted value: ");
    scanf("%f",&a);
    if(a==(iVal/fVal)){
        printf("Actual type: 2 (float), Actual value: %f -> MATCH\n",iVal/fVal);
    }
    else
    printf("Actual type: 2 (float), Actual value: %f ->Miss MATCH\n",iVal/fVal);

    return 0;
}