#include <stdio.h>

/* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
   */

int main() {
    float m, j ;
    printf("Escreva o comprimento em metros: ");
    scanf("%f", &m);
    j = m /0.91;
    printf("O comprimento convertido em jardas: %.2f",j);
    return 0;
}
