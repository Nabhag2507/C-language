#include<stdio.h>
void main (){
    int n,counter=0;

    printf("enter any number :");
    scanf("%d",&n);

    while (n>0)
    {
        n/=10;
        counter++;
    }
    printf("%d",counter);
}