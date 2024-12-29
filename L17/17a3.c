#include<stdio.h>
void main (){
    int a=5,b=10,*n1,*n2;
    int n1=&a;
    int n2=&b;

    printf("%d",*n1 + *n2);
}