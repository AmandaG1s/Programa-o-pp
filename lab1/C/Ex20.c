#include <stdio.h>
/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.*/
int main()
{
    float k,l;
    printf("Escreva o valor em quilograma");
    scanf("%f",&k);
    l = k/0.45;
    printf("Convecao para libra eh:%2f",l);
    return 0;
}
