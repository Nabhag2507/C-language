#include<stdio.h>
#include<string.h>
struct Book{
     char book_name[100];
     int price;
     int noofpage;
     char writter[100];
};
void main (){
    struct Book b1;
    int i;
    for (i=0;i<=2;i++){
        printf("Enter Book name for book %d:",i+1);
        scanf("%s",b1.book_name);
        printf("Enter book price for book %d:",i+1);
        scanf("%d",&b1.price);
        printf("Enter number of pages in book %d",i+1);
        scanf("%d",&b1.noofpage);
        printf("Enter name of book writter for book %d:",i+1);
        scanf("%s",b1.writter);
    }
    
    
}