#include<stdio.h>
void main (){
    int i,size,arr[100],odd=0,even=0;

    printf("enter size of an array :");
    scanf("%d",&size);

    for (i=0;i<size;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (i=0;i<size;i++){
       (arr[i]>0)?(odd++):(even++);
    }
    printf("odd numbers :%d even numbers :%d",odd,even);
}
