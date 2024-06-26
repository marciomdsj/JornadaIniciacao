#include<stdio.h>

int main(void){
    int w, x, y, z, w2, x2, y2, z2, dias, horas, minutos, segundosI, segundosF, segundos;
    scanf(" Dia %d", &w);
    scanf("%d : %d : %d", &x, &y, &z);

    scanf(" Dia %d", &w2);
    scanf("%d : %d : %d", &x2, &y2, &z2);
    
    segundosI = w * 86400 + x * 3600 + y * 60 + z;
    segundosF = w2 * 86400 + x2 * 3600 + y2 * 60 + z2;
    int delta = segundosF - segundosI;
    dias = delta/86400;
    horas = (delta%86400)/3600;
    minutos = ((delta%86400)%3600)/60;
    segundos = ((delta%86400)%3600%60); 
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);
    return 0;
}