#include <stdio.h>
/* Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
área do círculo é *raio2
, considere  = 3.141592.*/
int main()
{
    float raio,area,pi;
    float pi =3.14;
    
printf("Escreva o raio de um circulo");
scanf("%f",&raio);
area= raio * raio * pi;
printf("A area do circulo sera:%.2f m2\n",area);
return 0;
}
