#include<stdio.h>

int main(void){
    int n = 6, cont = 0;
    double x, sum = 0;
    while(n--){
        scanf("%lf", &x);
        if(x >= 0){
            cont++;
            sum += x;
        }
    }
    printf("%d valores positivos\n%.1lf\n", cont, sum/cont);
    return 0;
}