#include<stdio.h>

int main(){
    
    int x, years, months, days;
    scanf("%d", &x);
    years = x/365;
    months = (x%365)/30;
    days = ((x%365)%30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;
}