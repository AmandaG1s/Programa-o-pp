#include <stdio.h>
#include <stdlib.h>
/*Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
M em m/s.*/

int main()
{
    float M, K;
    printf("Informe a velocidade em metros por segundo: ");
    scanf("%f", &M);
    K = M * 3.6;
    printf("\nVelocidade em quilometros por hora:%.2f", M);
    system("pause");
    return 0;

}
