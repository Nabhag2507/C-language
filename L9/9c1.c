#include<stdio.h>
void main (){
    int on,rn=0,temp;
    printf("enter any number :");
    scanf("%d",&on);

    while (on != 0) {
        temp = on % 10;
        rn = rn * 10 + temp;
        on /= 10;
    }

    printf("Reversed number: %d\n", rn);
}