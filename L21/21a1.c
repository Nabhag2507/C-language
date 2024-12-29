#include<stdio.h>
struct employee{
    int id;
    char name[100];
    float salary;
    int age;
};

void main (){
    struct employee Employees[3];
    int i;
    for (i=0; i<3; i++){{
        printf("Enter id, name, salary, age of employee %d:\n", i++);
        scanf("%d %s %f %d",&Employees[i].id,&Employees[i].name,&Employees[i].salary,Employees[i].age);

        printf("Enter id, name, salary, age of employee %d:\n", i++);
        scanf("%d %s %f %d",&Employees[i].id,&Employees[i].name,&Employees[i].salary,Employees[i].age);

        printf("Enter id, name, salary, age of employee %d:\n", i++);
        scanf("%d %s %f %d",&Employees[i].id,&Employees[i].name,&Employees[i].salary,Employees[i].age);

    }
}
}