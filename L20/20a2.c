#include<stdio.h>
#include<string.h>
void main (){
    int str[100],size,i;

    printf("enter any characters in string :");
    gets(str);

    int size=strlen(str);

    for (int i=0;i<size;i++){
        if ((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
    }
    else{
        str[i]=str[i+1];
    }
  }
  printf("%s",str[i]);
}