#include<stdio.h>

int main(){
    int number_1,number_2,addtion,subtraction,Multiplication;
    float Division;

    printf("Enter Number 1:");
    scanf("%d",&number_1);

    printf("Enter Number 2:");
    scanf("%d",&number_2);

    addtion = number_1 + number_2;
    subtraction = number_1 - number_2;
    Multiplication = number_1 * number_2;
    Division = (float)number_1 / (float)number_2;

    printf("Addition = %d\n",addtion);
    printf("subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",Multiplication);
    printf("Division = %f\n",Division);



    return 0;
}