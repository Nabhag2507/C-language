#include<stdio.h>
void main (){
    int n;

    printf("enter any number :");
    scanf("%d",&n);

    if(n>0){
        printf("number is possitive :)");
    }

    else  if(n<0){
        printf("number is negative :)");
    }
    else{
        printf("number is zero :)");
    }
}