#include<stdio.h>
void main (){
    char ch;

    printf("enter any character :");
    scanf("%c",&ch);

   ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))?(printf("entered character is an alphabet")):(printf("entered character is not an alphabet"));
}