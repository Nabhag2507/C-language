#include<stdio.h>
void main (){
    int i,n,arr[100],counter;

    printf("enter size of an array :");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]%3==0){
            counter++;
        }
    }
    printf("total %d numbers are divisible by 3\n",counter);
}