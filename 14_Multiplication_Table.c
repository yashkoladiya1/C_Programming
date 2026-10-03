#include<stdio.h>

int main(){

    int tableNum,i=1,result;
    printf("Eneter table you want:");
    scanf("%d",&tableNum);

    for(i;i<=10;i++){
         result = tableNum * i ;
         printf("%d * %d = %d\n",tableNum,i,result);
    }
    return 0;
}