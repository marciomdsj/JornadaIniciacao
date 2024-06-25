#include<stdio.h>

int main(void){

    int c1, l1, c2, l2;
    scanf("%d %d %d %d", &c1, &l1, &c2, &l2);
    if(c1*l1 >= c2*l2){
        printf("%d", c1*l1);
    }
    else{
        printf("%d", c2*l2);
    }

    return 0;
}