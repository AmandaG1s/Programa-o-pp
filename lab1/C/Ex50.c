#include <stdio.h>
/*. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.*/
int main()
{
int id, ano_tual, ano_nasc;
    printf("Digite a idade: ");
    scanf("%d", &id);
    printf("Insira em que ano estamos: ");
    scanf("%d", &ano_tual);
    ano_nasc = ano_tual - id;
    printf("Voce nasceu em: %d", ano_nasc);
    printf("\n");
    
    return 0;
}
