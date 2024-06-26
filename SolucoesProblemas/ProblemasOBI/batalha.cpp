#include<stdio.h>

int main(void){
    int a1, d1, a2, d2;
    scanf("%d %d %d %d", &a1, &d1, &a2, &d2);
    if(a1 == d2 && a2 != d1){
        printf("2");
    }
    else if(a1 == d2 && a2 == d1 || a1 != d2 && a2 != d1){
        printf("-1");
    }
    else{
        printf("1");
    }
    return 0;
}