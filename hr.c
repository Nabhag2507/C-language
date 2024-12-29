#include <stdio.h>
int max_of_four(int,int,int,int);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d) {
    if (a>b && a>c && a>d){
        printf("A is largest");
    }    
    else if (b>a && b>c && b>d){
        printf("B is largest");
    }    
    else if (c>b && c>a && c>d){
        printf("C is largest");
    }    
    else if (d>b && d>c && d>a){
        printf("D is largest");
    }    
}