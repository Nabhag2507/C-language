#include<stdio.h>
void main (){
    int i,n;

    printf("enter numbers of elements in series :");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        
        printf("%d + ",i*i);
    }
}