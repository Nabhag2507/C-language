#include<stdio.h>
void main (){
    int i,base,power,sum=1;

    printf("enter any base :");
    scanf("%d",&base);

    printf("enter any power :");
    scanf("%d",&power);

    for(i=1;i<=power;i++){
       sum*=base;
    }
    printf("%d",sum);
}