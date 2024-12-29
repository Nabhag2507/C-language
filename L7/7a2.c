#include<stdio.h>
void main (){
    int n;

    printf("enter any number of month :");
    scanf("%d",&n);

    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("this month has 31 days :)");

        case 2:printf("this month has 28 days :)");
        
        case 4:
        case 6:
        case 9:
        case 11:printf("this month has 30 days :)");
    }
}