#include<stdio.h>

int main(){
    int length, width,area,perimeter;

    printf("Enter Length:");
    scanf("%d",&length);

    printf("Enter Width:");
    scanf("%d",&width);


    area = length * width;
    perimeter = 2 * (length + width);

    printf("AREA:%d\n",area);
    printf("PERIMETER:%d",perimeter);


    return 0;
}