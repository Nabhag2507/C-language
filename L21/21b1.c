#include<stdio.h>
struct employee{
    int id;
    char name [100];
};

void main (){
    struct employee emp1={101,"Jhon Dea"};

    struct employee *ptr=&emp1;

    printf("enter id :");
    scanf("%d",&emp1.id);
    printf("enter name :");
    gets(emp1.name);

}
