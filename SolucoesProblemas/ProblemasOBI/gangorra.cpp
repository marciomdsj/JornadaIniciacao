#include<stdio.h>

int main(void){
    int p1,c1,p2,c2;
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    if(p1 * c1 == p2 * c2){
        printf("0");
    }
    else{
        printf("%d", p1 * c1 > p2 * c2 ? -1 : 1);
    }
    return 0;
}