#include <stdio.h>
#include <stdlib.h>
/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/

int main()
{
    float k, c;
    puts("Converter k para c: ");
    puts("Temperatura em k: >");
    scanf("%f", &k);

    k = k-273.15;
     printf("k em c: > %.2f\n", c);
  system("pause");
  return 0;

}
