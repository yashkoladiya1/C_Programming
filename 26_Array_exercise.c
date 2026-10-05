#include <stdio.h>

int main() {
    int i, sum = 0;
    int arr[5] = {12, 45, 67, 23, 9};

    // 1. Array 
    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    // 2. Average 
    float avg = sum / 5.0;

    // 3. Results 
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}