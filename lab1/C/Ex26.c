#include <stdio.h>
/* Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
hectares.*/
int main() 
{
    float m, h;
    printf("Escreva a area em m");
    scanf("%f", &m);
    h = m * 0.0001;
    printf("A area em hectares eh: %.2f",h);
    return 0;
}
