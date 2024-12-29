#include<stdio.h>
int fact(int);
void main (){
    int n;

    printf("enter a value of n :");
    scanf("%d",&n);

    int ans=fact(n);
    printf("%d",fact(n));
}
int fact(int n){
    if (n==0){
        return 1;
    }
    else {
        return (n*fact(n-1));
    }
}

