#include<stdio.h>

int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a == b + c + d && b + c == d && b == c){
        printf("S");
    }
    else
    printf("N");
    return 0;
}