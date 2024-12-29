#include<stdio.h>
void addition(int,int);
void main (){
    int a,b;

    printf("enter any two numbers :");
    scanf("%d %d",&a,&b);
    addition(a,b);
}
void addition(int a,int b){
    printf("%d",a+b);
}