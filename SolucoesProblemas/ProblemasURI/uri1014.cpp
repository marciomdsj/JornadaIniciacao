#include <stdio.h>

int main(){

    int x;
    double y;
    scanf("%d %lf", &x, &y);
    printf("%.3lf km/l", x/y);

    return 0;
}