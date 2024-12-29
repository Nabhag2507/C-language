#include<stdio.h>
void main (){
    int a,b;
    char ch;

    printf("enter your choise :");
    scanf("%c",ch);
    printf("enter any two numbers :");
    scanf("%d %d",&a,&b);

    if(ch == '+'){
        printf("%d",a+b);
    }
     else if(ch == '-'){
        printf("%d",a-b);
    }
     else if(ch == '*'){
        printf("%d",a*b);
    }
     else if(ch == '/'){
        printf("%d",a/b);
    }
    else{
        printf("invalid choise");
    }
   
    
}