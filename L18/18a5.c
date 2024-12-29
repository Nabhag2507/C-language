#include<stdio.h>
void swap(int,int);
void main (){
    int a,b;
    printf("enter any two numbers :");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;

    printf("%d %d",a,b);
}