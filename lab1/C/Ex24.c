#include <stdio.h>
/* Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
acres.*/
int main() 
{
    float m, a;
    printf("Escreva a area em m");
    scanf("%f", &m);
    a = m * 0.000247;
    printf("A area em acres eh: %.2f",a);
    return 0;
}
