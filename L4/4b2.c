#include <stdio.h>

void main() {
    int p,r,t;
    float ans;
    
    printf("enter value of prinipal,roi and time  :");
    scanf("%d %d %d",&p,&r,&t);
    
    ans=(p*r*t)/100;
    
    printf("%f",ans+p);
  

}