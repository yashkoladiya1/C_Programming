#include <stdio.h>

// Global Variable (Badha functions mate common)
int counter = 0;

// Function Declaration
void incrementCounter();

int main() {
    // Function ne 3 vaar call karo
    incrementCounter();
    incrementCounter();
    incrementCounter();

    // Global counter ni value print karo (3 aavvi joie)
    printf("Final Counter Value: %d\n", counter);

    return 0;
}

// Function Definition
void incrementCounter() {
    counter++; // Global variable increment by 1 
}