#include <stdio.h>
//Leia quatro notas, calcule a média aritmética e imprima o resultado.
int main()
{
    float nota1,nota2,nota3,nota4,media;
    printf("Escreva a primeira  nota:");
    scanf("%f",&nota1);
    printf("Escreva a segunda nota:");
    scanf("%f",&nota2);
    printf("Escreva a terceira nota:");
    scanf("%f",&nota3);
    printf("Escreva a quarta nota:");
    scanf("%f",&nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    printf("Resultado da media = %.1f\n",media);
    return 0;
}
