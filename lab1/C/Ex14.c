#include <stdio.h>
#include <stdlib.h>
/*. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
R = G*/180, sendo G o ângulo em graus e R em radianos e  = 3.141592.*/

int main()
{
    float g, r;
    const double p = 3.14;
    
    printf("Escreva o valor do angulo em g: ");
    scanf("%f", &g);

    r = g * p/180;

    printf("\nO valor do angulo convertido: %.2f", r);
    system("pause");
    return 0;   
}
