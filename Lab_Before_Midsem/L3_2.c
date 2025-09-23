#include<stdio.h>
int main(){
    char a;
    while (1){

        if((scanf(" %c",&a))==EOF){
            break;
        }

        else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf(" The charector is vowel \n");

        else if('0'<=a&&a<='9'){
            printf(" The charector is digit \n");
        }

        else 
        printf(" The charector is something else \n");
    }

    return 0;
}