#include <stdio.h>
/*Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
calculado.*/
int main()
{
  float hd = 7;
  float hm, hrs_traba, bonus, salario_final;
  printf("Valor a receber por hora dia:R$%.2f",hd);
  printf("Quantidade de horas trabalhadas esse mes:");
  scanf("%f",hm);
  hrs_traba = hd * hm;
  bonus = hrs_traba * 0.10;
  salario_final = hrs_traba + bonus;
  printf("Salario final sera: R$%.2f",salario_final);
  return 0;
  
}
