#include<stdio.h>

int main(){
    int a,b,temp;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("a Value:%d\n",a);
    printf("b Value:%d\n",b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap a Value:%d\n",a);
    printf("After swap b Value:%d\n",b);
    return 0;
}