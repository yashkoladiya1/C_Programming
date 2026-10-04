#include <stdio.h>

// Function declaration with void
int findMax(int number,int number2);

int main() {
    int Num,Num2;
    printf("Enter Number: ");
    scanf("%d", &Num);

    printf("Enter Number: ");
    scanf("%d", &Num2);

    // Direct function call (no assignment needed)
    findMax(Num,Num2);

    return 0;
}

// Function definition
int findMax(int number,int number2) {
    if (number > number2) {
        printf("%d is Greater\n", number);
    } else {
        printf("%d is Greater\n", number2);
    }
}