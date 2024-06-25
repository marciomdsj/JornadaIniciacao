#include<stdio.h>

int main(void){

    int p, d1, d2, r;

    scanf("%d %d %d", &p, &d1, &d2);
    r = d1 + d2;
    if(p == 0){
        if(r%2)
            printf("1");
        else
            printf("0");
    }
    else{   
        if(r%2)
            printf("0");
        else
            printf("1");
    }


    return 0;
}