#include<stdio.h>
int parray(int,int);
void main (){
    int i,size,arr[100];

    printf("enter size of an array :");
    scanf("%d",&size);

    for (i=0,i<=size;i++;){
        printf("enter element %d : ",i);
        scanf("%d",&arr[i]);
    }

}
int parray(int arr,int size){
    int *i;
       for (i=0,i<=size;i++;){
        printf("%d ",arr[i]);
    } 
}
