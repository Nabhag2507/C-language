#include<stdio.h>
void main (){
    int n,i,ans,j;

    printf("enter any number :");
    scanf("%d",&n);

   ans=(n * (n + 1) * (2 * n + 4)) / 12;

   printf("your sum in %d",ans);
}