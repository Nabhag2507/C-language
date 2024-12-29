#include<stdio.h>
void main (){
    int p,c,m,e,s;
    float avg;

    printf("enter your all subjects marks :");
    scanf("%d %d %d %d %d",&p,&c,&m,&e,&s);

    avg=(p+c+m+e+s)/5;

    printf("your avg is %f",avg);

    if(avg<=35){
        printf("you are fail");
    }
    else if (avg>35 && avg<=45){
        printf("you are pass ");
    }
     else if (avg>45 && avg<=60){
        printf("you are in second class ");
    }
     else if (avg>60 && avg<=70){
        printf("you are in first class ");
    }
    else {
        printf("you scored distinstion :)");
    }

}