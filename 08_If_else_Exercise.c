#include<stdio.h>

int main(){
    int num1,num2;

    printf("Enter number 1:");
    scanf("%d",&num1);

    printf("Enter number 2:");
    scanf("%d",&num2);

    if(num1 > num2){
        printf("Number 1 is Greater");
    }else if(num2 > num1){
        printf("Number 2 is Greater");
    }else{
        printf("Both numbers are Equal");
    }

    return 0;
}