/*
Function Syntax

return_type function_name(parameter_type parameter_name) {
    // Code block
    return value;
}



*/

#include <stdio.h>

// 1. Declaration (Prototype)
int addNumbers(int num1, int num2);

int main() {
    int result;

    // 3. Function Call
    result = addNumbers(10, 20);
    printf("Sum is: %d\n", result);

    return 0;
}

// 2. Definition
int addNumbers(int num1, int num2) {
    return num1 + num2;
}