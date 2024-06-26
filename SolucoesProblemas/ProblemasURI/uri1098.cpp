#include<stdio.h>

int main(void) {
    for (int i = 0; i <= 20; i+=2) { // Usando inteiros para controlar o loop
        double di = i / 10.0; // Convertendo para double com precisão
        for (int j = 1; j <= 3; j++) {
            double dj = di + j;
            if (di == 0 || di == 1 || di == 2) {
                printf("I=%.0lf J=%.0lf\n", di, dj);
            } else {
                printf("I=%.1lf J=%.1lf\n", di, dj);
            }
        }
    }
    return 0;
}