#include<stdio.h>

int calculateSquare(int number);


int main(){
    int Num,Result;
    printf("Enter Number:");
    scanf("%d",&Num);

    Result = calculateSquare(Num);
    printf("Square of Entered Number is %d",Result);


    return 0;
}

int calculateSquare(int number){
    return number * number;
}