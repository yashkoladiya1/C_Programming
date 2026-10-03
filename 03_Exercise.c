#include<stdio.h>

int main(){
    int number1,number2,result;

    printf("Enter Number 1:");
    scanf("%d",&number1);
    printf("Enter Number 2:");
    scanf("%d",&number2);
    result = number1 +number2;
    printf("Sum of two number is %d",result);
    return 0;
}