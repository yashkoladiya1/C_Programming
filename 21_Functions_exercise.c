#include <stdio.h>

// Function declaration with void
void checkEvenOdd(int number);

int main() {
    int Num;
    printf("Enter Number: ");
    scanf("%d", &Num);

    // Direct function call (no assignment needed)
    checkEvenOdd(Num);

    return 0;
}

// Function definition
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is Even\n", number);
    } else {
        printf("%d is Odd\n", number);
    }
}