#include <stdio.h>
/*Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
cilindro circular é calculado por meio da seguinte fórmula: V =  * raio2 * altura, onde  =
3.141592.*/
 int main()
 {
    float altura,raio, volume;
    float pi =3.141592;
    printf("Insira a altura do cilindo:");
    scanf("%f",&altura);
    printf("Insira a raio do cilindo:");
    scanf("%f",&raio);
    
    volume = pi * raio * raio;
    
    printf("Volume do cilindo eh:%.2f\n",volume);
    
   return 0;    
 }
