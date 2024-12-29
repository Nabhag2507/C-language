#include<stdio.h>
void main (){
    int i=43;
    float f=3.14;
    double d=9.1615;
    char c='A';

    int *pi=&i;
    float *pf=&f;
    double *pd=&d;
    char *pc=&c;

    printf("int value : %d at address %p",*pi, (void*)pi);
    printf("int value : %.2f at address %p",*pf, (void*)pf);
    printf("int value : %.4f at address %p",*pd, (void*)pd);
    printf("int value : %c at address %p",*pc, (void*)pc);

}