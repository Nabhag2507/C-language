#include<stdio.h>
void main (){
    int i,size,arr[100],max,min,sum=0;

    printf("enter size of an array :");
    scanf("%d",&size);

    for (i=0;i<size;i++){
        printf("enter element in array :");
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++){
       (arr[i]>arr[i+1])?(max=arr[i]):(max=arr[i+1]);
    }
    for (i=0;i<size;i++){
       (arr[i]>arr[i+1])?(min=arr[i+1]):(min=arr[i]);
    }
    for (i=0;i<size;i++){
        sum+=arr[i];
    }
    float avg=sum/size;

    printf("gretest element in array is :%d\n",max);
    printf("smallest element in array is :%d\n",min);
    printf("sum of array elements is :%d\n",sum);
    printf("average of array elements is :%f",avg);


}