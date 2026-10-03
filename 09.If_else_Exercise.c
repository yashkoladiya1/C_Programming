#include<stdio.h>

int main(){
    int num1;

    printf("Enter number 1:");
    scanf("%d",&num1);


    if(num1 > 0){
        printf("Number is Postive");
    }else if(num1 == 0){
        printf("Number is Zero");
    }else{
        printf("Number is Negative");
    }

    return 0;
}