#include<stdio.h>
void main (){
    int a,b;
    int *p1,*p2;

    printf("enter any 2 numbers :");
    scanf("%d %d",&a,&b);

    p1=&a;
    p2=&b;

    int temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("%d %d",*p1,*p2);

}