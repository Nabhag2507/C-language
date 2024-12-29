#include<stdio.h>
void main (){
    int i,size,arr[100],pcounter=0,ncounter=0;

    printf("enter size of an array :");
    scanf("%d",&size);

    for (i=0;i<size;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for (i=0;i<size;i++){
       (arr[i]%2==0)?(pcounter++):(ncounter++);
    }
    printf("possitive numbers :%d negative numbers :%d",pcounter,ncounter);
}
