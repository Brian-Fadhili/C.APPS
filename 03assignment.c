#include<stdio.h>
int main(){
    float a,b;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);

    if(a>b){
        printf("%f is greater than %f", a,b);
    }

    else if(a<b){
        printf("%f is less than %f", a,b);
    }

    else {
        printf("%f is equal to %f", a,b);
    }
}