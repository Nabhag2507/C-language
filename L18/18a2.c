#include<stdio.h>
void maxmin(int,int);
void main (){
    int a,b;

    printf("enter any two numbers :");
    scanf("%d %d",&a,&b);
    maxmin(a,b);
}
void maxmin(int a,int b){
    if (a>b){
        printf("%d is largest and %d is smmalest",a,b);
    }
    else{
        printf("%d is largest and %d is smmalest",b,a);
    }
}