#include <stdio.h>

int main() {
    int a;
    long long fact = 1;

    printf("Enter Num you want: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) { 
        fact = fact * i;          
    }

    printf("Factorial of %d is: %lld\n", a, fact);

    return 0;
}