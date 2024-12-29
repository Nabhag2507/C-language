#include<stdio.h>
void main (){
    int n,temp;

    printf("enter any number :");
    scanf("%d",&n);

    temp=n%10;

    while (n>=10)
    {
        n/=10;

    }

     printf("Sum of first and last digits: %d\n", temp+n);
    
}