#include<stdio.h>

int main(void){
    int p, r;
    scanf("%d %d", &p, &r);
    if(p == 1){
        if (r == 1){
            printf("A");
        }
        else{
            printf("B");
        }
    }
    else{
        printf("C");
    }

    return 0;
}