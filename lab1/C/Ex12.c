#include <stdio.h>
#include <stdlib.h>
/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.*/

int main()
{
    float M, K;
    printf("Insira o valor em milhas:");
    scanf("%f", &M);
    K = 1.61 * M;
    printf("\nA distancia convertida em milhas: %.2f", K);
    system("pause");
    return 0;
}
