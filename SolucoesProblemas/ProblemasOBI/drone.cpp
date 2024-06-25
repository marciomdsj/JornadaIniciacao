#include<stdio.h>

int main(void){

    double a,b,c,L,H;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &H, &L);
      if ((a <= H && b <= L) || (a <= L && b <= H) ||
        (a <= H && c <= L) || (a <= L && c <= H) ||
        (b <= H && c <= L) || (b <= L && c <= H)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}