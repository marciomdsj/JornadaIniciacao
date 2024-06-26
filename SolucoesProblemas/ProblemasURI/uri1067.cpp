#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int i;
    i = 1;

    while(i <= n){
        if(i % 2 ){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}