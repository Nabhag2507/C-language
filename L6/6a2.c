#include<stdio.h>
void main (){
    int s;

    printf("enter your salary :");
    scanf("%d",&s);

    if (s>=10000 && s<20000){
        printf("your salary is %d",s+(0.2*s)+(s*0.8));
    }

     else if (s>=20000 && s<30000){
        printf("your salary is %d",s+(0.25*s)+(s*0.9));
    }
     else if (s>=30000){
        printf("your salary is %d",s+(0.3*s)+(s*0.95));
    }
}