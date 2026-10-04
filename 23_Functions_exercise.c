#include <stdio.h>

// Function declaration with void
float celsiusToFahrenheit(float celsius);

int main() {
    float Cel,Result;
    printf("Enter Celsius: ");
    scanf("%f", &Cel);

    // Direct function call (no assignment needed)
    Result = celsiusToFahrenheit(Cel);
    printf("%f is converted by %f",Cel,Result);

    return 0;
}

// Function definition
float celsiusToFahrenheit(float celsius) {
    return celsius*9/5+32;
}