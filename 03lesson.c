// Taking user input and use of if, else conditionals
#include<stdio.h>

int main(){
    float a,b, result;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);
    
    if(b!=0){
     result = a/b;
     printf("The answer is = %f", result);
    }

    else
     printf("Don't divide by 0 dude!");

}
