#include<stdio.h>

int main(){

    int D;
    scanf("%d", &D);
    if(D<=800){
        printf("1");
    }
    else if(D<=1400){
        printf("2");
    }
    else{
        printf("3");
    }

    /*
    Outro jeito de fazer: printf("%d", D <= 800 ? 1 : (D <= 1400 ? 2 : 3)); apenas essa linha.
    */

    return 0;
}