#include <stdio.h>
#include <math.h>
/*Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎
2 + b
2. Faça um programa que receba os valores de a e b e calcule o valor da
hipotenusa através da equação. Imprima o resultado dessa operação.
*/
 int main()
{
int ladoa, ladob;
float h;
printf("Insira o lado a do triagulo\n");
scanf("%d",ladoa);
printf("Insira o lado b do triagulo\n");
scanf("%d",ladob);
h = sqrt((ladoa * ladob) + (ladoa * ladob));
printf("Hipotenusa ~= %.2f\n",h);
return 0;
}
