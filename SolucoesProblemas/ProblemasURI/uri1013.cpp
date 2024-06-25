#include<stdio.h>
#include<math.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maiorAB;
    int maior;
    maiorAB = (a + b + abs(a - b))/2;
    maior = (maiorAB + c + abs(maiorAB - c))/2;
    printf("%d eh o maior", maior);
    return 0;
}