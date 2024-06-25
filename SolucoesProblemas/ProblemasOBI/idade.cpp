#include<stdio.h>

int main(void){

    int m, a, b, c, maior = 0;
    scanf("%d %d %d", &m, &a, &b);
    c = m - a - b;
    if(a >= b && a >= c){
        maior = a;
    }
    else if(b >= a && b >= c){
        maior = b;
    }
    else{
        maior = c;
    }
    printf("%d", maior);

    return 0;
}