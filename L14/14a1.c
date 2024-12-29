#include<stdio.h>
void main (){
    int size,i,arr[100];

    printf("enter size of an array :");
    scanf("%d",&size);

    for (i=0;i<size;i++){
        printf("enter eliments in an array :");
        scanf("%d",&arr[i]);
    }
    for (i=size-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}