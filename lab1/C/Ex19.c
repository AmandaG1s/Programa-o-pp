#include <stdio.h>
/*Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
cúbicos.*/
int main()
{
    float l, m;
    printf("Escreva em litros");
    scanf("%f", &l);
    m = l / 1000;
    printf("Convercao para metros cubicos eh: %2f", m);
    return 0;

}
