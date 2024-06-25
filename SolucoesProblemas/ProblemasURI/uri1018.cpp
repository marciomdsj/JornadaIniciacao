#include<stdio.h>

int main(void){

    int n, oneH, fivety, twenty, ten, five, two, one;
    scanf("%d", &n);

    oneH = n/100;
    fivety = (n%100)/50;
    twenty = ((n%100)%50)/20;
    ten = (((n%100)%50)%20)/10;
    five = ((((n%100)%50)%20)%10)/5;
    two = (((((n%100)%50)%20)%10)%5)/2;
    one = ((((((n%100)%50)%20)%10)%5)%2);
    printf("%d\n%d nota(s) de R$ 100,00\n", n, oneH);
    printf("%d nota(s) de R$ 50,00\n", fivety);
    printf("%d nota(s) de R$ 20,00\n", twenty);
    printf("%d nota(s) de R$ 10,00\n", ten);
    printf("%d nota(s) de R$ 5,00\n", five);
    printf("%d nota(s) de R$ 2,00\n", two);
    printf("%d nota(s) de R$ 1,00\n", one);


    return 0;
}