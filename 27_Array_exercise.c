#include <stdio.h>

int main() {
    int i;
    int arr[5] = {12, 45, 67, 23, 9};
    int max = arr[0]; 

    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum Number = %d\n", max);

    return 0;
}