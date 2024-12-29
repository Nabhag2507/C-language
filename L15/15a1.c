#include<stdio.h>
void main (){
    int arr1[100],i,arr2[100],j,s1,s2;
    printf("Enter the number of elements in the first array:");
    scanf("%d",&s1);

    for (i=0;i<s1;i++){
        printf("Enter element %d of the first array:",i+1);
        scanf("%d",&arr1[i]);
    }
   
    for (j=0;j<=i;j++){
       arr2[j]=arr1[i];
    }
    printf("%d",arr2[j]);
}