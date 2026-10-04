#include <stdio.h>

int isPrime(int num)
{
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) == 1)
        printf("%d is a Prime Number.", num);
    else
        printf("%d is not a Prime Number.", num);

    return 0;
}