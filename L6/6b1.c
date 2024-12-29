#include<stdio.h>
void main (){
    int bill;

    printf("enter your electricity bill :");
    scanf("%d",&bill);

    if(bill<=50){
        printf("your bill is %d"(bill*0.5));
    }
    else if (bill>50 && bill<=150){
        printf("your bill is %d",(bill*0.75));
    }
    else if (bill>150 && bill<=250){
        printf("your bill is %d",(bill*1.2));
    }
   
     else {
        printf("your bill is %d",(bill*1.5)+(bill*0.2));
    }
   
}