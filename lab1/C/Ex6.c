#include <stdio.h>
#include <stdlib.h>
/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
*/
int main()
{
  float f, c;

  puts("Converter C para F");
  puts("Temperatura em c: > ");
  scarf("%f", &c);
  f = (c * (9.0/5.0)) + 32.0;//converção
  printf("c em f: > %.2f\n", f);
  system("pause");
  return 0;

}
