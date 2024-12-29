#include<stdio.h>
struct Student{
    char name[100];
    float perc;
    int age;
};
void main (){
    struct Student students[5];
    for (int i=0;i<5;i++){
        printf("Enter name of student %d: ",i+1);
        gets(students[i].name);
        printf("Enter percentage of student %d: ",i+1);
        scanf("%f",&students[i].perc);
        printf("Enter age of student %d: ",i+1);
        scanf("%d",students[i].age);
    }

    for (int i=0;i<5;i++){
        printf("%s",students[i].name);
        printf("%f",students[i].perc);
        printf("%d",students[i].age);

    }
}