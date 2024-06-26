#include<stdio.h>

int main(void){
    int k, l;
    scanf("%d %d", &k, &l);
    if(k <= 8 && l >= 9 || l <= 8 && k >= 9){
        printf("final");
    }
    else if(k <= 4 && l >= 5 || l <= 4 && k >= 5 || k <= 12 && l >= 13 || l <= 12 && k >= 13 ){
        printf("semifinal");
    }
    else if(k <= 2 && l >= 3 || l <= 2 && k >= 3 || k <= 6 && l >= 7 || l <= 6 && k >= 7 || k <= 10 && l >= 11 || l <= 10 && k >= 11 ||
    k <= 14 && l >= 15 || l <= 14 && k >= 15){
        printf("quartas");
    }
    else{
        printf("oitavas");
    }
   
    return 0;
}
