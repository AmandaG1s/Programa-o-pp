#include <stdio.h>

/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
em polegadas.*/

int main() 
{
    float p, c;
    printf("Escreva o valor em polegadas: ");
    scanf("%f", &p);
    c = p * 2.54;
    printf("\n O valor convertido em centimetros eh: %.2fcm", c);
    return 0;
}
