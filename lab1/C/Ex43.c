#include <stdio.h>
/*Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3% sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).*/
int main()
{
    float vltotal, desconto,vlrapagar, parce,comis,comis2;

    printf("Coloque o valor total ");
    scanf("%f", &vltotal);

    desconto = vl * 0.10;
    vlrapagar = vltotal - desconto;
    printf("\nValor a pagar com desconto de 10: R$%.2f" , vlrapagar);
    parce = vltotal / 3;
    printf("\nTotal do parcelamento em 3x sem juros: R$%.2f", parce);
    comis = vlrapagar * 0.05;
    printf("\nComissao venda a vista: R$%.2f", comis);
    comis2 = vltotal * 0.05;
    printf("\nComissao venda parcelada: R$%.2f", comis2);
   

    return 0;
}
