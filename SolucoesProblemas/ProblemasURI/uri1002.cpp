#include<stdio.h>

int main(){

    double p = 3.14159;
    double r;

    scanf("%lf", &r);
    double raio = r*r;
    printf("A=%.4lf\n", p*raio);

    return 0;
}