#include <stdio.h>
/*Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/
int main()
{
float largura, comprimento, preco, total;
    printf("\nQual a largura do terreno: ");
    scanf("%f", &largura);
    printf("\nQual o comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("\nQual o preco do terreno: R$");
    scanf("%f", &preco);
    total = (comprimento * largura * preco);
    printf("\nO valor  gasto para cercar o terreno sera: R$%.2f", total);
    return 0;
}
