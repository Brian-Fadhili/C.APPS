#include<stdio.h>
int main(){
    int a,b, result;
    b = 2;
    
    printf("Enter any number:");
    scanf("%d", &a);

    result= a % b;

    if(result!=1){
        printf("Even number");
    }

    else{
        printf("Odd number");
    }
}