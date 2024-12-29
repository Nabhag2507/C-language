#include<stdio.h>

void main()

{
int i,base,power, ans;

ans=1;

printf("Enter the value of base :");
scanf("%d", &base);

printf("Enter the value of power :");
scanf("%d", &power);

for(i=1; i<=power; i++)
{
ans= ans*base;
}

printf(" %d to the power %d is %d", base, power, ans);

}