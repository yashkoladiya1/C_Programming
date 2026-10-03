#include<stdio.h>

/*
== -> Equal to
!= -> Not equal to
> -> Greater than
< -> Less than
>= -> Greater than or Equal to
<= -> Less than or Equal to


if (condition) {
    // if condition  (True) than this code runs
} else {
    // if  condition  (False) than this code runs
}

*/

int main(){
    int Number;

    printf("Enter Number:");
    scanf("%d",&Number);

    if(Number%2 == 0){
        printf("Number is Even");
    }else{
        printf("Number is Odd");
    }
    return 0;
}