#include <stdio.h>
void main (){
    int a,b,c;

    printf(" enter any three numbers :");
    scanf("%d %d %d",&a ,&b ,&c);

    (a>b)?((a>c)?(printf("%d %d",a*b,a*c)):(printf("%d %d",c*a,c*b))):((b>c)?(printf("%d %d",a*b,b*c)):(printf("%d %d",c*a,c*b)));


    }