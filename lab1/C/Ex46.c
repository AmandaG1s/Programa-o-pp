#include <stdio.h>
/*Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido. Exemplo:
numero_lido = 123
numero_gerado = 321*/
int main()
{
int n, num1, num2, num3;
   printf("Digite um numero inteiro de 3 digitos positivo: ");
   scanf("%d", &n);
   if (n > 10)
    {
     num1 = n%10;
	   n = n/10;
	   num2 = n%10;
	   n= n/10;
	   num3=n%10;
	   n=n/10;
   }
   printf("%d%d%d\n", num1, num2, num3);
   
   return 0;
}
