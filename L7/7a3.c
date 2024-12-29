#include<stdio.h>
void main (){
    int a,b;
    char ch;

    printf("enter two numbers :");
    scanf("%d %d",&a ,&b);

    printf("enter your choise :");
    scanf("%c",&ch);

    switch (ch){
        case '+':printf("%d",a+b);
                break;
        case '-':printf("%d",a+-b);
                break;
        case '*':printf("%d",a*b);
                break;
        case '/':printf("%d",a/b);
                break;
    }
}