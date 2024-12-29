#include<stdio.h>
void main (){
    int arr[100],size,i,n;

    printf("enter size of an array :");
    scanf("%d",&size);

    for (i=0;i<size;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter element to be searched : ");
    scanf("%d",&n);
    
    for (i=0;i<size;i++){
        if (arr[i]==n){
            printf("%d found at position %d",n,i+1);
        }
}
}