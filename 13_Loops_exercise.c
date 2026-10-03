#include <stdio.h>

int main() {
    int start_Number, End_Number;

    printf("Enter Start number: ");
    scanf("%d", &start_Number);

    printf("Enter End number: ");
    scanf("%d", &End_Number);


    for (int i = start_Number; i <= End_Number; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}