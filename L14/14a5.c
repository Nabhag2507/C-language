#include<stdio.h>
void main (){
    int i,j,size1,size2,arr1[100],arr2[100],height=0,weight=0;

    printf("enter size of array which contains height of people :");
    scanf("%d",&size1);

    for (i=0;i<size1;i++){
        printf("enter size of person %d",size1+1);
        scanf("%d",&arr1[i]);
    }

     printf("enter size of array which contains weight of people :");
    scanf("%d",&size2);

    for (j=0;j<size2;j++){
        printf("enter size of person %d",size2+1);
        scanf("%d",&arr2[j]);
    }

    for (i=0;i<size1;i++){
       if(arr1[i]>170){
            height++;
       }
    }
    
    for (j=0;j<size2;j++){
       if(arr2[j]<50){
            weight++;
       }
    }
    printf("%d people has more than 170 height and %d people has less than 50 kg weight :)");
    
}