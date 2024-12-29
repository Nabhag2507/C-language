#include<stdio.h>
void main (){
    int n,i,counter=1;

    printf("enter any  number :");
    scanf("%d",&n);

    for (i=n;i>9;i/=10){
            counter++;
    }

    printf("frequency of number is :%d",counter);
}