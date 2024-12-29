#include<stdio.h>
void maxmin(int,int,int);
void main (){
    float a,b,c;

    printf("enter any three numbers :");
    scanf("%f %f %f",&a,&b,&c);
    maxmin(a,b,c);
}
void maxmin(int a,int b,int c){
   
   (a>b)?((a>c)?printf("a is largest"):printf("c is largest")):((b>c)?printf("b is largest"):printf("c is largest"));
}